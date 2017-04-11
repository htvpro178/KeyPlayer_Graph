#include <QDebug>
#include <QSpinBox>
#include <QRadioButton>
#include <QPushButton>
#include <QDoubleSpinBox>
#include <QGraphicsColorizeEffect>

#include "randsmallworlddialog.h"

RandSmallWorldDialog::RandSmallWorldDialog(QWidget *parent) :
    QDialog(parent)
{
    qDebug() << "::RandSmallWorldDialog() " ;

    ui.setupUi(this);

    nodes = 0;
    degree = 0;
    bprob = 0;
    mode = "";
    diag = false;

    connect ( ui.buttonBox, &QDialogButtonBox::accepted,
              this, &RandSmallWorldDialog::gatherData );

    ui.buttonBox -> button (QDialogButtonBox::Ok) -> setDefault(true);

    (ui.nodesSpinBox )->setFocus();

    ui.probDoubleSpinBox->setEnabled(true);
    ui.degreeSpinBox-> setEnabled(true);
    ui.undirectedRadioButton->setChecked(true);
    ui.directedRadioButton->setEnabled(false);
    ui.diagCheckBox ->setChecked(false);
    ui.diagCheckBox -> setEnabled(false);

    connect ( ui.undirectedRadioButton,&QRadioButton::clicked,
              this, &RandSmallWorldDialog::setModeUndirected );
    connect ( ui.directedRadioButton,&QRadioButton::clicked,
              this, &RandSmallWorldDialog::setModeDirected );

    connect ( ui.diagCheckBox,&QCheckBox::clicked,
              this, &RandSmallWorldDialog::setDiag);
}


void RandSmallWorldDialog::setModeDirected (){
    ui.directedRadioButton->setChecked(true) ;
    ui.undirectedRadioButton->setChecked(false) ;

}

void RandSmallWorldDialog::setModeUndirected (){
    ui.directedRadioButton->setChecked(false) ;
    ui.undirectedRadioButton->setChecked(true) ;
}

void RandSmallWorldDialog::setDiag (){
    if (ui.diagCheckBox -> isChecked())
        ui.diagCheckBox->setText("Yes, allow");
    else
        ui.diagCheckBox->setText("No, set zero");
}

void RandSmallWorldDialog::checkErrors() {
    qDebug()<< " RandSmallWorldDialog::checkErrors()" ;

    //     if ( !ui.gnpRadioButton->isChecked() &&  !ui.gnmRadioButton->isChecked())
    //     {
    //         QGraphicsColorizeEffect *effect = new QGraphicsColorizeEffect;
    //         effect->setColor(QColor("red"));
    //         ui.gnpRadioButton->setGraphicsEffect(effect);
    //         (ui.buttonBox) -> button (QDialogButtonBox::Ok) -> setEnabled(false);
    //     }
    //     else {
    //         ui.gnpRadioButton->setGraphicsEffect(0);
    //         ui.gnmRadioButton->setGraphicsEffect(0);
    //         (ui.buttonBox) -> button (QDialogButtonBox::Ok) -> setEnabled(true);
    //     }
    //gatherData();
}

void RandSmallWorldDialog::gatherData() {
    qDebug() << "RandSmallWorldDialog::gatherData() " ;
    nodes = ui.nodesSpinBox->value();
    bprob = ui.probDoubleSpinBox->value();
    degree= ui.degreeSpinBox->value();
    mode = (ui.directedRadioButton->isChecked() ? "digraph" : "graph" );
    diag = (ui.diagCheckBox -> isChecked() ? true : false);
    qDebug() << "nodes " << nodes ;
    qDebug() << "bprob " << bprob;
    qDebug() << "degree" << degree;
    qDebug() << "mode " << mode;
    qDebug() << "diag " << diag;
    emit userChoices(nodes, degree, bprob, mode, diag);

}

