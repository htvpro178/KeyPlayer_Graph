#ifndef RANDERDOSRENYIDIALOG_H
#define RANDERDOSRENYIDIALOG_H

#include <QDialog>

#include "ui_randerdosrenyidialog.h"

class RandErdosRenyiDialog  : public QDialog
{
    Q_OBJECT
public:
    explicit RandErdosRenyiDialog(QWidget *parent=0);

public slots:
    void checkErrors();
    void gatherData();
    void gnmModel();
    void gnpModel();
    void setModeDirected();
    void setModeUndirected();
    void setDiag();

signals:
    void userChoices( const int nodes,
                      const QString model,
                      const int edges,
                      const float eprob,
                      const QString mode,
                      const bool diag);
private:
    QString model;
    QString mode;
    int nodes, edges;
    float eprob;
    bool diag;
    Ui::RandErdosRenyiDialog ui;
};

#endif // RANDERDOSRENYIDIALOG_H
