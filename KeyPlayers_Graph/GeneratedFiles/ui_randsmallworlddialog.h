/********************************************************************************
** Form generated from reading UI file 'randsmallworlddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDSMALLWORLDDIALOG_H
#define UI_RANDSMALLWORLDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RandSmallWorldDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nodesLabel;
    QSpinBox *nodesSpinBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *degreeSpinBox;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QLabel *probLabel;
    QDoubleSpinBox *probDoubleSpinBox;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QRadioButton *undirectedRadioButton;
    QRadioButton *directedRadioButton;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *diagCheckBox;
    QFrame *line_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RandSmallWorldDialog)
    {
        if (RandSmallWorldDialog->objectName().isEmpty())
            RandSmallWorldDialog->setObjectName(QStringLiteral("RandSmallWorldDialog"));
        RandSmallWorldDialog->resize(570, 390);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RandSmallWorldDialog->sizePolicy().hasHeightForWidth());
        RandSmallWorldDialog->setSizePolicy(sizePolicy);
        RandSmallWorldDialog->setMinimumSize(QSize(570, 390));
        RandSmallWorldDialog->setMaximumSize(QSize(580, 410));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        RandSmallWorldDialog->setFont(font);
        verticalLayout_3 = new QVBoxLayout(RandSmallWorldDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(RandSmallWorldDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(450, 70));
        label_2->setMaximumSize(QSize(16777215, 75));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);

        verticalLayout_3->addWidget(label_2);

        line = new QFrame(RandSmallWorldDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nodesLabel = new QLabel(RandSmallWorldDialog);
        nodesLabel->setObjectName(QStringLiteral("nodesLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nodesLabel->sizePolicy().hasHeightForWidth());
        nodesLabel->setSizePolicy(sizePolicy1);
        nodesLabel->setMinimumSize(QSize(380, 0));
        QFont font2;
        font2.setPointSize(11);
        nodesLabel->setFont(font2);

        horizontalLayout_2->addWidget(nodesLabel);

        nodesSpinBox = new QSpinBox(RandSmallWorldDialog);
        nodesSpinBox->setObjectName(QStringLiteral("nodesSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nodesSpinBox->sizePolicy().hasHeightForWidth());
        nodesSpinBox->setSizePolicy(sizePolicy2);
        nodesSpinBox->setMinimumSize(QSize(110, 0));
        nodesSpinBox->setFont(font2);
        nodesSpinBox->setMinimum(4);
        nodesSpinBox->setMaximum(9999);
        nodesSpinBox->setValue(100);

        horizontalLayout_2->addWidget(nodesSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        line_2 = new QFrame(RandSmallWorldDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        label_4 = new QLabel(RandSmallWorldDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(380, 0));
        label_4->setFont(font2);

        horizontalLayout_6->addWidget(label_4);

        degreeSpinBox = new QSpinBox(RandSmallWorldDialog);
        degreeSpinBox->setObjectName(QStringLiteral("degreeSpinBox"));
        degreeSpinBox->setMinimumSize(QSize(110, 0));
        degreeSpinBox->setFont(font2);
        degreeSpinBox->setMinimum(2);
        degreeSpinBox->setMaximum(9999);
        degreeSpinBox->setSingleStep(2);
        degreeSpinBox->setValue(10);

        horizontalLayout_6->addWidget(degreeSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_6);

        line_3 = new QFrame(RandSmallWorldDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        probLabel = new QLabel(RandSmallWorldDialog);
        probLabel->setObjectName(QStringLiteral("probLabel"));
        sizePolicy1.setHeightForWidth(probLabel->sizePolicy().hasHeightForWidth());
        probLabel->setSizePolicy(sizePolicy1);
        probLabel->setMinimumSize(QSize(400, 0));
        probLabel->setFont(font2);

        horizontalLayout->addWidget(probLabel);

        probDoubleSpinBox = new QDoubleSpinBox(RandSmallWorldDialog);
        probDoubleSpinBox->setObjectName(QStringLiteral("probDoubleSpinBox"));
        sizePolicy2.setHeightForWidth(probDoubleSpinBox->sizePolicy().hasHeightForWidth());
        probDoubleSpinBox->setSizePolicy(sizePolicy2);
        probDoubleSpinBox->setMinimumSize(QSize(110, 0));
        probDoubleSpinBox->setFont(font2);
        probDoubleSpinBox->setMinimum(0.01);
        probDoubleSpinBox->setMaximum(1);
        probDoubleSpinBox->setSingleStep(0.01);
        probDoubleSpinBox->setValue(0.5);

        horizontalLayout->addWidget(probDoubleSpinBox);


        verticalLayout_3->addLayout(horizontalLayout);

        line_4 = new QFrame(RandSmallWorldDialog);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(RandSmallWorldDialog);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(400, 0));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);

        horizontalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        undirectedRadioButton = new QRadioButton(RandSmallWorldDialog);
        undirectedRadioButton->setObjectName(QStringLiteral("undirectedRadioButton"));
        sizePolicy2.setHeightForWidth(undirectedRadioButton->sizePolicy().hasHeightForWidth());
        undirectedRadioButton->setSizePolicy(sizePolicy2);
        undirectedRadioButton->setMinimumSize(QSize(110, 0));
        QFont font4;
        font4.setPointSize(11);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        undirectedRadioButton->setFont(font4);
        undirectedRadioButton->setChecked(true);
        undirectedRadioButton->setAutoExclusive(false);

        verticalLayout->addWidget(undirectedRadioButton);

        directedRadioButton = new QRadioButton(RandSmallWorldDialog);
        directedRadioButton->setObjectName(QStringLiteral("directedRadioButton"));
        sizePolicy2.setHeightForWidth(directedRadioButton->sizePolicy().hasHeightForWidth());
        directedRadioButton->setSizePolicy(sizePolicy2);
        directedRadioButton->setMinimumSize(QSize(100, 0));
        directedRadioButton->setFont(font2);
        directedRadioButton->setAutoExclusive(false);

        verticalLayout->addWidget(directedRadioButton);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        line_5 = new QFrame(RandSmallWorldDialog);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(RandSmallWorldDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(400, 0));
        label_3->setFont(font2);

        horizontalLayout_4->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        diagCheckBox = new QCheckBox(RandSmallWorldDialog);
        diagCheckBox->setObjectName(QStringLiteral("diagCheckBox"));
        sizePolicy2.setHeightForWidth(diagCheckBox->sizePolicy().hasHeightForWidth());
        diagCheckBox->setSizePolicy(sizePolicy2);
        diagCheckBox->setMinimumSize(QSize(110, 0));
        diagCheckBox->setFont(font2);
        diagCheckBox->setChecked(false);

        verticalLayout_2->addWidget(diagCheckBox);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        line_6 = new QFrame(RandSmallWorldDialog);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_6);

        buttonBox = new QDialogButtonBox(RandSmallWorldDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(RandSmallWorldDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RandSmallWorldDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RandSmallWorldDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RandSmallWorldDialog);
    } // setupUi

    void retranslateUi(QDialog *RandSmallWorldDialog)
    {
        RandSmallWorldDialog->setWindowTitle(QApplication::translate("RandSmallWorldDialog", "Small-World network generator", 0));
        label_2->setText(QApplication::translate("RandSmallWorldDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Generate random network according to the <span style=\" font-style:italic;\">Watts &amp; Strogatz </span>model.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This model produces graphs with small-world properties, including short average path lengths and high clustering. Read more in the manual.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        nodesLabel->setText(QApplication::translate("RandSmallWorldDialog", "Nodes", 0));
#ifndef QT_NO_TOOLTIP
        nodesSpinBox->setToolTip(QApplication::translate("RandSmallWorldDialog", "<html><head/><body><p>The resulting graph will have N nodes and N*d/2 edges</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("RandSmallWorldDialog", "<html><head/><body><p>Mean Degree <span style=\" font-style:italic;\">d</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        degreeSpinBox->setToolTip(QApplication::translate("RandSmallWorldDialog", "<html><head/><body><p>This is the mean edge degree each new node will have</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        probLabel->setText(QApplication::translate("RandSmallWorldDialog", "<html><head/><body><p>Rewiring Probability <span style=\" font-style:italic;\">\316\262</span></p></body></html>", 0));
        label->setText(QApplication::translate("RandSmallWorldDialog", "Graph Mode", 0));
        undirectedRadioButton->setText(QApplication::translate("RandSmallWorldDialog", "Undirected", 0));
        directedRadioButton->setText(QApplication::translate("RandSmallWorldDialog", "Directed", 0));
        label_3->setText(QApplication::translate("RandSmallWorldDialog", "Allow diagonals (loops) or set to zero?", 0));
#ifndef QT_NO_TOOLTIP
        diagCheckBox->setToolTip(QApplication::translate("RandSmallWorldDialog", "Check to allow loops (nodes linking to themselves) in the new network", 0));
#endif // QT_NO_TOOLTIP
        diagCheckBox->setText(QApplication::translate("RandSmallWorldDialog", "No loops", 0));
    } // retranslateUi

};

namespace Ui {
    class RandSmallWorldDialog: public Ui_RandSmallWorldDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDSMALLWORLDDIALOG_H
