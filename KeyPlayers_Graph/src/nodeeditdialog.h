#ifndef NODEEDITDIALOG_H
#define NODEEDITDIALOG_H

#include <QDialog>

#include "ui_nodeeditdialog.h"


class NodeEditDialog : public QDialog
{
    Q_OBJECT
public:
    explicit NodeEditDialog(QWidget *parent = 0,
                            const QString &l = "",
                            const int &s = 8,
                            const QColor &c= QColor("red"),
                            const QString &sh = "circle");
public slots:
    void checkErrors ();
    void gatherData ();
    void selectColor();
signals:
    void userChoices( const QString, const int, const QString, const QColor, const QString);
    void nodeEditDialogError(QString);

private:
    QColor nodeColor;
    QString nodeShape;
    QString nodeValue;
    QString nodeLabel;
    int nodeSize;
    QPixmap pixmap;
    Ui::NodeEditDialog ui;



};

#endif // NODEEDITDIALOG_H
