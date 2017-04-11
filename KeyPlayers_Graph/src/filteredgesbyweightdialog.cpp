#include "filteredgesbyweightdialog.h"
#include <QPushButton>
#include <QDebug>

FilterEdgesByWeightDialog::FilterEdgesByWeightDialog (QWidget *parent) : QDialog (parent)
{
	ui.setupUi(this);	
	connect ( ui.buttonBox,SIGNAL(accepted()), this, SLOT(gatherData()) );
	
	(ui.buttonBox) -> button (QDialogButtonBox::Ok) -> setDefault(true);
	
	(ui.overThresholdBt)-> setChecked(true);
		
} 




void FilterEdgesByWeightDialog::gatherData(){
	qDebug()<< "Dialog: gathering Data!...";
	bool overThreshold=false;
	float my_threshold = static_cast <float> ( (ui.weightThreshold)->value() );
	if ( ui.overThresholdBt -> isChecked() ) {
		qDebug()<< "Dialog: We will filter edges weighted more than threshold: " << my_threshold;
		overThreshold = true;
	}
	else {
		qDebug()<< "Dialog: We will filter edges weighted less than threshold: " << my_threshold;
		overThreshold = false;
	}	
	qDebug()<< "Dialog: emitting userChoices" ;
	emit userChoices( my_threshold, overThreshold );		
}
