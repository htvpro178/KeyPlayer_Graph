#ifndef WEBCRAWLERDIALOG_H
#define WEBCRAWLERDIALOG_H


#include <QDialog>

#include "ui_webcrawlerdialog.h"
 

class WebCrawlerDialog: public QDialog
{
	Q_OBJECT
public:
	WebCrawlerDialog (QWidget *parent = 0);
public slots:
    void checkErrors ();
	void gatherData ();
signals:
    void userChoices( QString, int, int, bool, bool);
    void webCrawlerDialogError(QString);
private:
	Ui::WebCrawlerDialog ui;

};



#endif
