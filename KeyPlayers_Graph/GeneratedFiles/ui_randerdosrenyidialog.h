/********************************************************************************
** Form generated from reading UI file 'randerdosrenyidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDERDOSRENYIDIALOG_H
#define UI_RANDERDOSRENYIDIALOG_H

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

class Ui_RandErdosRenyiDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nodesLabel;
    QSpinBox *nodesSpinBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *modelLabel;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *gnpRadioButton;
    QRadioButton *gnmRadioButton;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *edgesSpinBox;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout;
    QLabel *probLabel;
    QDoubleSpinBox *probDoubleSpinBox;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QRadioButton *undirectedRadioButton;
    QRadioButton *directedRadioButton;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *diagCheckBox;
    QFrame *line_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RandErdosRenyiDialog)
    {
        if (RandErdosRenyiDialog->objectName().isEmpty())
            RandErdosRenyiDialog->setObjectName(QStringLiteral("RandErdosRenyiDialog"));
        RandErdosRenyiDialog->resize(560, 520);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RandErdosRenyiDialog->sizePolicy().hasHeightForWidth());
        RandErdosRenyiDialog->setSizePolicy(sizePolicy);
        RandErdosRenyiDialog->setMinimumSize(QSize(560, 520));
        RandErdosRenyiDialog->setMaximumSize(QSize(650, 539));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        RandErdosRenyiDialog->setFont(font);
        verticalLayout_4 = new QVBoxLayout(RandErdosRenyiDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(RandErdosRenyiDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(540, 85));
        label_2->setMaximumSize(QSize(16777215, 96));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);

        verticalLayout_4->addWidget(label_2);

        line = new QFrame(RandErdosRenyiDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nodesLabel = new QLabel(RandErdosRenyiDialog);
        nodesLabel->setObjectName(QStringLiteral("nodesLabel"));
        sizePolicy1.setHeightForWidth(nodesLabel->sizePolicy().hasHeightForWidth());
        nodesLabel->setSizePolicy(sizePolicy1);
        nodesLabel->setMinimumSize(QSize(350, 0));
        nodesLabel->setFont(font1);

        horizontalLayout_2->addWidget(nodesLabel);

        nodesSpinBox = new QSpinBox(RandErdosRenyiDialog);
        nodesSpinBox->setObjectName(QStringLiteral("nodesSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nodesSpinBox->sizePolicy().hasHeightForWidth());
        nodesSpinBox->setSizePolicy(sizePolicy2);
        nodesSpinBox->setMinimumSize(QSize(120, 0));
        nodesSpinBox->setFont(font1);
        nodesSpinBox->setMinimum(0);
        nodesSpinBox->setMaximum(9999);
        nodesSpinBox->setValue(100);

        horizontalLayout_2->addWidget(nodesSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        line_2 = new QFrame(RandErdosRenyiDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        modelLabel = new QLabel(RandErdosRenyiDialog);
        modelLabel->setObjectName(QStringLiteral("modelLabel"));
        sizePolicy1.setHeightForWidth(modelLabel->sizePolicy().hasHeightForWidth());
        modelLabel->setSizePolicy(sizePolicy1);
        modelLabel->setMinimumSize(QSize(350, 0));
        modelLabel->setFont(font1);

        horizontalLayout_5->addWidget(modelLabel);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gnpRadioButton = new QRadioButton(RandErdosRenyiDialog);
        gnpRadioButton->setObjectName(QStringLiteral("gnpRadioButton"));
        gnpRadioButton->setMinimumSize(QSize(120, 0));
        gnpRadioButton->setFont(font1);
        gnpRadioButton->setChecked(true);
        gnpRadioButton->setAutoExclusive(false);

        verticalLayout_3->addWidget(gnpRadioButton);

        gnmRadioButton = new QRadioButton(RandErdosRenyiDialog);
        gnmRadioButton->setObjectName(QStringLiteral("gnmRadioButton"));
        gnmRadioButton->setMinimumSize(QSize(100, 0));
        gnmRadioButton->setFont(font1);
        gnmRadioButton->setAutoExclusive(false);

        verticalLayout_3->addWidget(gnmRadioButton);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_5);

        line_3 = new QFrame(RandErdosRenyiDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        label_4 = new QLabel(RandErdosRenyiDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(350, 0));
        label_4->setFont(font1);

        horizontalLayout_6->addWidget(label_4);

        edgesSpinBox = new QSpinBox(RandErdosRenyiDialog);
        edgesSpinBox->setObjectName(QStringLiteral("edgesSpinBox"));
        edgesSpinBox->setMinimumSize(QSize(120, 0));
        edgesSpinBox->setFont(font1);
        edgesSpinBox->setMinimum(10);
        edgesSpinBox->setMaximum(9999);

        horizontalLayout_6->addWidget(edgesSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_6);

        line_4 = new QFrame(RandErdosRenyiDialog);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        probLabel = new QLabel(RandErdosRenyiDialog);
        probLabel->setObjectName(QStringLiteral("probLabel"));
        sizePolicy1.setHeightForWidth(probLabel->sizePolicy().hasHeightForWidth());
        probLabel->setSizePolicy(sizePolicy1);
        probLabel->setMinimumSize(QSize(350, 0));
        probLabel->setFont(font1);

        horizontalLayout->addWidget(probLabel);

        probDoubleSpinBox = new QDoubleSpinBox(RandErdosRenyiDialog);
        probDoubleSpinBox->setObjectName(QStringLiteral("probDoubleSpinBox"));
        sizePolicy2.setHeightForWidth(probDoubleSpinBox->sizePolicy().hasHeightForWidth());
        probDoubleSpinBox->setSizePolicy(sizePolicy2);
        probDoubleSpinBox->setMinimumSize(QSize(120, 0));
        probDoubleSpinBox->setFont(font1);
        probDoubleSpinBox->setMinimum(0.01);
        probDoubleSpinBox->setMaximum(1);
        probDoubleSpinBox->setSingleStep(0.01);
        probDoubleSpinBox->setValue(0.1);

        horizontalLayout->addWidget(probDoubleSpinBox);


        verticalLayout_4->addLayout(horizontalLayout);

        line_5 = new QFrame(RandErdosRenyiDialog);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(RandErdosRenyiDialog);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(350, 0));
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        undirectedRadioButton = new QRadioButton(RandErdosRenyiDialog);
        undirectedRadioButton->setObjectName(QStringLiteral("undirectedRadioButton"));
        sizePolicy2.setHeightForWidth(undirectedRadioButton->sizePolicy().hasHeightForWidth());
        undirectedRadioButton->setSizePolicy(sizePolicy2);
        undirectedRadioButton->setMinimumSize(QSize(120, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        undirectedRadioButton->setFont(font2);
        undirectedRadioButton->setChecked(true);
        undirectedRadioButton->setAutoExclusive(false);

        verticalLayout->addWidget(undirectedRadioButton);

        directedRadioButton = new QRadioButton(RandErdosRenyiDialog);
        directedRadioButton->setObjectName(QStringLiteral("directedRadioButton"));
        sizePolicy2.setHeightForWidth(directedRadioButton->sizePolicy().hasHeightForWidth());
        directedRadioButton->setSizePolicy(sizePolicy2);
        directedRadioButton->setMinimumSize(QSize(120, 0));
        directedRadioButton->setFont(font1);
        directedRadioButton->setAutoExclusive(false);

        verticalLayout->addWidget(directedRadioButton);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_3);

        line_6 = new QFrame(RandErdosRenyiDialog);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(RandErdosRenyiDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(350, 0));
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        diagCheckBox = new QCheckBox(RandErdosRenyiDialog);
        diagCheckBox->setObjectName(QStringLiteral("diagCheckBox"));
        sizePolicy2.setHeightForWidth(diagCheckBox->sizePolicy().hasHeightForWidth());
        diagCheckBox->setSizePolicy(sizePolicy2);
        diagCheckBox->setMinimumSize(QSize(120, 0));
        diagCheckBox->setFont(font1);
        diagCheckBox->setChecked(true);

        verticalLayout_2->addWidget(diagCheckBox);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        line_7 = new QFrame(RandErdosRenyiDialog);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_7);

        buttonBox = new QDialogButtonBox(RandErdosRenyiDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(RandErdosRenyiDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RandErdosRenyiDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RandErdosRenyiDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RandErdosRenyiDialog);
    } // setupUi

    void retranslateUi(QDialog *RandErdosRenyiDialog)
    {
        RandErdosRenyiDialog->setWindowTitle(QApplication::translate("RandErdosRenyiDialog", "Erd\305\221s\342\200\223R\303\251nyi network generator", 0));
        label_2->setText(QApplication::translate("RandErdosRenyiDialog", "<html><head/><body><p>Generate random network according to Erd\305\221s\342\200\223R\303\251nyi (ER) model. </p><p>In fact, there are two models: in <span style=\" font-style:italic;\">G(n,p)</span> edges are created with Bernoulli trials, while in <span style=\" font-style:italic;\">G(n,M) </span>a graph is randomly selected from all graphs with <span style=\" font-style:italic;\">n</span> nodes and <span style=\" font-style:italic;\">M</span> edges.  Read more in the manual.</p></body></html>", 0));
        nodesLabel->setText(QApplication::translate("RandErdosRenyiDialog", "Nodes", 0));
        modelLabel->setText(QApplication::translate("RandErdosRenyiDialog", "Model to use", 0));
#ifndef QT_NO_TOOLTIP
        gnpRadioButton->setToolTip(QApplication::translate("RandErdosRenyiDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This will create a new random network using <span style=\" font-weight:600;\">G(n,p)</span> model, where</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">n</span> is the number of nodes in the final graph</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-lef"
                        "t:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">p</span> is the probability with which an edge is included in the graph</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If you select this model, you must enter the number of nodes n and the edge probability p. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You may also select if the final network will b"
                        "e undirected or directed and if you want to allow nodes to link to themselves (diagonal non zero).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gnpRadioButton->setText(QApplication::translate("RandErdosRenyiDialog", "G(n, p)", 0));
#ifndef QT_NO_TOOLTIP
        gnmRadioButton->setToolTip(QApplication::translate("RandErdosRenyiDialog", "<html><head/><body><p>This will create a new random network using <span style=\" font-weight:600;\">G(n,M)</span> model, where</p><p><span style=\" font-weight:600;\"> n</span> is the number of nodes in the final graph</p><p><span style=\" font-weight:600;\"> M</span> is the number of edges in the final graph</p><p>If you select this model, you must enter both the number of nodes n and the number of edges M</p><p>You may also select if the final network will be undirected or directed and if you want to allow nodes to link to themselves (diagonal non zero).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gnmRadioButton->setText(QApplication::translate("RandErdosRenyiDialog", "G(n, M)", 0));
        label_4->setText(QApplication::translate("RandErdosRenyiDialog", "<html><head/><body><p>Edges <span style=\" color:#7c7c7c;\">for G(n,M) model only</span></p></body></html>", 0));
        probLabel->setText(QApplication::translate("RandErdosRenyiDialog", "<html><head/><body><p>Edge Probability <span style=\" color:#7c7c7c;\">applicable only in G(n,p) model</span></p></body></html>", 0));
        label->setText(QApplication::translate("RandErdosRenyiDialog", "Graph Mode", 0));
        undirectedRadioButton->setText(QApplication::translate("RandErdosRenyiDialog", "Undirected", 0));
        directedRadioButton->setText(QApplication::translate("RandErdosRenyiDialog", "Directed", 0));
        label_3->setText(QApplication::translate("RandErdosRenyiDialog", "Allow diagonals (loops) or set to zero?", 0));
        diagCheckBox->setText(QApplication::translate("RandErdosRenyiDialog", "Yes, allow", 0));
    } // retranslateUi

};

namespace Ui {
    class RandErdosRenyiDialog: public Ui_RandErdosRenyiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDERDOSRENYIDIALOG_H
