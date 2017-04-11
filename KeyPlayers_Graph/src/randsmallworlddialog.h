#ifndef RANDSMALLWORLDDIALOG_H
#define RANDSMALLWORLDDIALOG_H

#include <QDialog>

#include "ui_randsmallworlddialog.h"

class RandSmallWorldDialog : public QDialog
{
    Q_OBJECT
public:
    explicit RandSmallWorldDialog(QWidget *parent = 0);

public slots:
    void checkErrors();
    void gatherData();
    void setModeDirected();
    void setModeUndirected();
    void setDiag();

signals:
    void userChoices( const int nodes,
                      const int degree,
                      const float prob,
                      const QString mode,
                      const bool diag);
private:
    QString mode;
    int nodes, degree;
    float bprob;
    bool diag;
    Ui::RandSmallWorldDialog ui;

};

#endif // RANDSMALLWORLDDIALOG_H
