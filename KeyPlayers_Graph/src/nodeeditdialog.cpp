#include <QDebug>
#include <QLineEdit>
#include <QSpinBox>
#include <QToolButton>
#include <QRadioButton>
#include <QPushButton>
#include <QColorDialog>
#include <QPixmap>
#include <QGraphicsEffect>

#include "nodeeditdialog.h"

NodeEditDialog::NodeEditDialog(QWidget *parent,
                               const QString &l,
                               const int &s,
                               const QColor &col,
                               const QString &sh) :
    QDialog(parent)
{
    ui.setupUi(this);
    nodeSize = s;
    nodeColor = col;
    nodeShape = sh;
    nodeLabel = l;

    ui.labelEdit->setText(nodeLabel);
    ui.sizeSpin->setValue(nodeSize);

    if ( nodeShape == "box"  ){
       ui.boxRadio->setChecked (true);
    }
    else if ( nodeShape == "circle"  ){
        ui.circleRadio->setChecked (true);
     }
    else if ( nodeShape == "diamond"  ){
        ui.diamondRadio->setChecked (true);
     }
    else if ( nodeShape == "ellipse"  ){
        ui.ellipseRadio->setChecked (true);
     }
    else if ( nodeShape == "triangle"  ){
        ui.triangleRadio->setChecked (true);
     }

    pixmap = QPixmap(60,20) ;
    pixmap.fill(nodeColor);
    ui.colorButton->setIcon(QIcon(pixmap));

    connect ( ui.buttonBox,SIGNAL(accepted()), this, SLOT(gatherData()) );

    (ui.buttonBox) -> button (QDialogButtonBox::Ok) -> setDefault(true);

    (ui.labelEdit)->setFocus();

    connect (ui.labelEdit, &QLineEdit::editingFinished,
             this, &NodeEditDialog::checkErrors);

    connect (ui.colorButton, &QToolButton::clicked,
             this, &NodeEditDialog::selectColor);

}



void NodeEditDialog::gatherData(){
    qDebug()<< " NodeEditDialog::gatherData()" ;
    nodeLabel = ui.labelEdit->text();
    nodeSize = ui.sizeSpin->value();
    nodeValue = ui.valueEdit->text();
    nodeShape = "circle";
    if ( ui.boxRadio->isChecked () ){
       nodeShape  = "box";
    }
    else if ( ui.circleRadio->isChecked() ){
       nodeShape  = "circle";
    }
    else if ( ui.diamondRadio->isChecked() ){
       nodeShape  = "diamond";
    }
    else if ( ui.ellipseRadio->isChecked() ){
        nodeShape  = "ellipse";
    }
    else if ( ui.triangleRadio->isChecked() ){
        nodeShape  = "triangle";
    }

    emit userChoices(nodeLabel,nodeSize,nodeValue,nodeColor,nodeShape);
}

void NodeEditDialog::checkErrors() {
    qDebug()<< " NodeEditDialog::checkErrors()" ;
    QString userLabel = ui.labelEdit->text();
    userLabel = userLabel.simplified();
    ui.labelEdit->setText(userLabel);

    if ( ui.labelEdit->text().isEmpty() ) {
        qDebug() << "empty label!";
        QGraphicsColorizeEffect *effect = new QGraphicsColorizeEffect;
        effect->setColor(QColor("red"));
        ui.labelEdit->setGraphicsEffect(effect);
        //(ui.buttonBox) -> button (QDialogButtonBox::Ok) -> setEnabled(false);
    }
    else {
        ui.labelEdit->setGraphicsEffect(0);
        (ui.buttonBox) -> button (QDialogButtonBox::Ok) -> setEnabled(true);
    }
    //gatherData();
}

void NodeEditDialog::selectColor() {
    qDebug()<< " NodeEditDialog::selectColor()" ;
    nodeColor = QColorDialog::getColor(
                Qt::red, this, tr("Select node color") );
    if ( nodeColor.isValid()) {
        qDebug() << " color selected " << nodeColor.name();
        pixmap.fill(nodeColor);
        ui.colorButton->setIcon(QIcon(pixmap));
    }
    else {
        // user pressed Cancel
        qDebug() << " Aborted node color";
    }

}
