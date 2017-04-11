#include <QtWidgets>
#include "previewform.h"

PreviewForm::PreviewForm(QWidget *parent) :
    QDialog(parent)
{
    encodingComboBox = new QComboBox;

    encodingLabel = new QLabel(tr("&Encoding:"));
    encodingLabel->setBuddy(encodingComboBox);

    textEdit = new QTextEdit;
    textEdit->setToolTip(tr("In this area you can preview your file.\n")
                           + (" Select the correct encoding from the menu.\n")
                           + (" Mac and Linux users select UTF-8\n")
                           + (" Windows users select Windows-1253 or UTF-8\n")
                           + (" Windows users in Russia select KOI8-R\n"));

    textEdit->setLineWrapMode(QTextEdit::NoWrap);
    textEdit->setReadOnly(true);

    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok
                                    | QDialogButtonBox::Cancel);

    connect(encodingComboBox, SIGNAL(activated(int)),
            this, SLOT(updateTextEdit()));
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(encodingLabel, 0, 0);
    mainLayout->addWidget(encodingComboBox, 0, 1);
    mainLayout->addWidget(textEdit, 1, 0, 1, 2);
    mainLayout->addWidget(buttonBox, 2, 0, 1, 2);
    setLayout(mainLayout);

    setWindowTitle(tr("Preview file & Choose Encoding"));
    resize(600, 400);
}

void PreviewForm::setCodecList(const QList<QTextCodec *> &list)
{
    encodingComboBox->clear();
    foreach (QTextCodec *codec, list)
        encodingComboBox->addItem(codec->name(), codec->mibEnum());
}

void PreviewForm::setEncodedData(const QByteArray &data,
                                 const QString m_fileName,
                                 const int m_format)
{
    fileName = m_fileName;
    format = m_format;
    encodedData = data;
    updateTextEdit();
}

void PreviewForm::updateTextEdit()
{
    int mib = encodingComboBox->itemData(
                      encodingComboBox->currentIndex()).toInt();
    QTextCodec *codec = QTextCodec::codecForMib(mib);
    qDebug () << " PreviewForm::updateTextEdit() " << codec->name();
    QTextStream in(&encodedData);
    in.setAutoDetectUnicode(false);
    in.setCodec(codec);
    decodedStr = in.readAll();

    textEdit->setPlainText(decodedStr);
}

void PreviewForm::accept() {
    int mib = encodingComboBox->itemData(
                      encodingComboBox->currentIndex()).toInt();
    QTextCodec *codec = QTextCodec::codecForMib(mib);
    qDebug () << " PreviewForm::accept() returning codec name " << codec->name();
    emit userCodec(fileName, codec->name(), format);
    QDialog::accept();

}
