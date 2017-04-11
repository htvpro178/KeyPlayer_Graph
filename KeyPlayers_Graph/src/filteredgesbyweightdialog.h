#ifndef FILTEREDGESBYWEIGHTDIALOG_H
#define FILTEREDGESBYWEIGHTDIALOG_H


#include <QDialog>

#include "ui_filteredgesbyweightdialog.h"
 

class FilterEdgesByWeightDialog : public QDialog
{
	Q_OBJECT
public:
	FilterEdgesByWeightDialog (QWidget *parent = 0);
public slots:
	void gatherData ();
signals:
	void userChoices( float, bool);	
private:
	Ui::FilterEdgesByWeightDialog ui;

};


#endif 
