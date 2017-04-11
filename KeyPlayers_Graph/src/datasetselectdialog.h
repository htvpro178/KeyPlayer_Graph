#ifndef DATASETSELECTDIALOG_H
#define DATASETSELECTDIALOG_H

#include <QDialog>
#include "ui_datasetselectdialog.h"
 

class DataSetSelectDialog: public QDialog
{
	Q_OBJECT
public:
	DataSetSelectDialog (QWidget *parent = 0);
    ~DataSetSelectDialog();
public slots:
	void gatherData();
signals:
	void userChoices(QString);	
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DataSetSelectDialog ui;
    QStringList datasets_list, datasets_filenames;

};



#endif
