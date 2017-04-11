#include "webcrawlerdialog.h"
#include <QDebug>
#include <QPushButton>
#include <QUrl>

WebCrawlerDialog::WebCrawlerDialog(QWidget *parent) : QDialog (parent)
{
    ui.setupUi(this);
    connect ( ui.buttonBox,SIGNAL(accepted()), this, SLOT(gatherData()) );

    (ui.buttonBox) -> button (QDialogButtonBox::Ok) -> setDefault(true);

    (ui.seedUrlEdit)->setFocus();

    connect (ui.extLinksCheckBox, &QCheckBox::stateChanged,
             this, &WebCrawlerDialog::checkErrors);

    connect (ui.intLinksCheckBox, &QCheckBox::stateChanged,
             this, &WebCrawlerDialog::checkErrors);

    if ( !ui.extLinksCheckBox->isChecked()  &&!ui.intLinksCheckBox->isChecked() )
    {
        (ui.buttonBox) -> button (QDialogButtonBox::Ok)->setDisabled(true);
    }

}

void WebCrawlerDialog::checkErrors(){
    qDebug()<< "WebCrawlerDialog::checkErrors...";
    if ( !ui.extLinksCheckBox->isChecked()  && !ui.intLinksCheckBox->isChecked() )
    {
        (ui.buttonBox) -> button (QDialogButtonBox::Ok)->setDisabled(true);
    }
    else
        (ui.buttonBox) -> button (QDialogButtonBox::Ok)->setEnabled(true);

}

void WebCrawlerDialog::gatherData(){
    qDebug()<< "WebCrawlerDialog::gatherData()...";

    bool extLinks=true, intLinks=false;

    QString seedUrl = (ui.seedUrlEdit)->text();

    qDebug()<< "WebCrawlerDialog::gatherData() initial seed url "
            << seedUrl
            << " simplifying and lowering it";

    seedUrl = seedUrl.simplified().toLower() ;

    qDebug()<< "WebCrawlerDialog::gatherData() adding / to seed url ";
    seedUrl = seedUrl + "/";

    QUrl newUrl(seedUrl);

    qDebug()<< "WebCrawlerDialog::gatherData()  QUrl " << newUrl.toString()
            << " scheme " << newUrl.scheme()
            << " host " << newUrl.host()
            << " path " << newUrl.path();

    if ( newUrl.scheme() != "http"  && newUrl.scheme() != "https"  &&
         newUrl.scheme() != "ftp" && newUrl.scheme() != "ftps") {
        qDebug()<< "WebCrawlerDialog::gatherData()  URL scheme missing "
                << newUrl.scheme()
                << " setting the default scheme http ";
        newUrl = QUrl ("http://" + seedUrl);
        qDebug() << newUrl;
    }

    if (! newUrl.isValid() || newUrl.host() == "") {
        emit webCrawlerDialogError(seedUrl);
        qDebug()<< "WebCrawlerDialog::gatherData()  not valid URL";
        return;
    }

    seedUrl = newUrl.toString();

    qDebug()<< "WebCrawlerDialog::gatherData()  final seed url " << newUrl
            << " scheme " << newUrl.scheme()
            << " host " << newUrl.host()
            << " path " << newUrl.path();

    int maxLinksPerPage = (ui.maxLinksPerPageSpinBox) -> value();
    int totalUrlsToCrawl = (ui.totalUrlsToCrawlSpinBox) -> value();

    if ( ui.extLinksCheckBox -> isChecked() ) {
        qDebug()<< "	External links will be crawled... " ;
        extLinks = true;
    }
    else {
        qDebug()<< "	No external links... ";
        extLinks = false;
    }
    if ( ui.intLinksCheckBox -> isChecked() ) {
        qDebug()<< "	Internal links will be crawled too. " ;
        intLinks = true;
    }
    else {
        qDebug()<< "	No internal links. ";
        intLinks = false;
        if (!intLinks && !extLinks)
            return;
    }

    qDebug()<< "	seedUrl: " << seedUrl;
    qDebug()<< "	maxLinksPerPage " << maxLinksPerPage
            << "  totalUrlsToCrawl " << totalUrlsToCrawl  ;
    emit userChoices( seedUrl, totalUrlsToCrawl, maxLinksPerPage, extLinks, intLinks );
}
