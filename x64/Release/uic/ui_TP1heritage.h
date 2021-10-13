/********************************************************************************
** Form generated from reading UI file 'TP1heritage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TP1HERITAGE_H
#define UI_TP1HERITAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TP1heritageClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menud_s;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TP1heritageClass)
    {
        if (TP1heritageClass->objectName().isEmpty())
            TP1heritageClass->setObjectName(QString::fromUtf8("TP1heritageClass"));
        TP1heritageClass->resize(600, 400);
        centralWidget = new QWidget(TP1heritageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 70, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 70, 131, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 110, 121, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 190, 101, 81));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 180, 75, 23));
        TP1heritageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TP1heritageClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menud_s = new QMenu(menuBar);
        menud_s->setObjectName(QString::fromUtf8("menud_s"));
        TP1heritageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TP1heritageClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TP1heritageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TP1heritageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TP1heritageClass->setStatusBar(statusBar);

        menuBar->addAction(menud_s->menuAction());

        retranslateUi(TP1heritageClass);
        QObject::connect(pushButton, SIGNAL(clicked()), TP1heritageClass, SLOT(onSendMessageButtonClicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), TP1heritageClass, SLOT(onButtonResetClicked()));

        QMetaObject::connectSlotsByName(TP1heritageClass);
    } // setupUi

    void retranslateUi(QMainWindow *TP1heritageClass)
    {
        TP1heritageClass->setWindowTitle(QCoreApplication::translate("TP1heritageClass", "TP1heritage", nullptr));
        pushButton->setText(QCoreApplication::translate("TP1heritageClass", "lance le d\303\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TP1heritageClass", "affiche la valeur du d\303\251", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("TP1heritageClass", "Reset score", nullptr));
        menud_s->setTitle(QCoreApplication::translate("TP1heritageClass", "d\303\251s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TP1heritageClass: public Ui_TP1heritageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TP1HERITAGE_H
