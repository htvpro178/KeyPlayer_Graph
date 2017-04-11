#ifndef PREVIEWFORM_H
#define PREVIEWFORM_H

#include <QDialog>
#include <QList>

class QComboBox;
class QDialogButtonBox;
class QLabel;
class QTextCodec;
class QTextEdit;

class PreviewForm : public QDialog
{
    Q_OBJECT
public:
    explicit PreviewForm(QWidget *parent = 0);
    void setCodecList(const QList<QTextCodec *> &list);
    void setEncodedData(const QByteArray &data, const QString, const int );
    QString decodedString() const { return decodedStr; }
signals:
    void userCodec(const QString, const QString, const int);
private slots:
    void updateTextEdit();
    void accept();

private:
    QByteArray encodedData;
    QString decodedStr, fileName;
    int format;
    QComboBox *encodingComboBox;
    QLabel *encodingLabel;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

};

#endif // PREVIEWFORM_H
