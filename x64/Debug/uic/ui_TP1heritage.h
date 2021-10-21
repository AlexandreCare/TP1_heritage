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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TP1heritageClass
{
public:
    QAction *actiond_histo;
    QAction *actiond;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menud_s;
    QMenu *menud_histo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TP1heritageClass)
    {
        if (TP1heritageClass->objectName().isEmpty())
            TP1heritageClass->setObjectName(QString::fromUtf8("TP1heritageClass"));
        TP1heritageClass->resize(532, 400);
        actiond_histo = new QAction(TP1heritageClass);
        actiond_histo->setObjectName(QString::fromUtf8("actiond_histo"));
        actiond = new QAction(TP1heritageClass);
        actiond->setObjectName(QString::fromUtf8("actiond"));
        centralWidget = new QWidget(TP1heritageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 40, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 51, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 70, 51, 41));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 122, 141, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 40, 81, 16));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 10, 75, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 10, 75, 23));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(180, 10, 151, 192));
        TP1heritageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TP1heritageClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 532, 21));
        menud_s = new QMenu(menuBar);
        menud_s->setObjectName(QString::fromUtf8("menud_s"));
        menud_histo = new QMenu(menuBar);
        menud_histo->setObjectName(QString::fromUtf8("menud_histo"));
        TP1heritageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TP1heritageClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TP1heritageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TP1heritageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TP1heritageClass->setStatusBar(statusBar);

        menuBar->addAction(menud_s->menuAction());
        menuBar->addAction(menud_histo->menuAction());

        retranslateUi(TP1heritageClass);
        QObject::connect(pushButton, SIGNAL(clicked()), TP1heritageClass, SLOT(onSendMessageButtonClicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), TP1heritageClass, SLOT(onButtonResetClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TP1heritageClass, SLOT(onButtonHidedeClicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), TP1heritageClass, SLOT(onButtonHidedehistoClicked()));

        QMetaObject::connectSlotsByName(TP1heritageClass);
    } // setupUi

    void retranslateUi(QMainWindow *TP1heritageClass)
    {
        TP1heritageClass->setWindowTitle(QCoreApplication::translate("TP1heritageClass", "TP1heritage", nullptr));
        actiond_histo->setText(QCoreApplication::translate("TP1heritageClass", "d\303\251histo", nullptr));
        actiond->setText(QCoreApplication::translate("TP1heritageClass", "d\303\251", nullptr));
        pushButton->setText(QCoreApplication::translate("TP1heritageClass", "lance le d\303\251", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("TP1heritageClass", "R\303\251initialisation des scores", nullptr));
        label_3->setText(QCoreApplication::translate("TP1heritageClass", "Score total :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TP1heritageClass", "D\303\251histo", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TP1heritageClass", "D\303\251", nullptr));
        menud_s->setTitle(QCoreApplication::translate("TP1heritageClass", "d\303\251s", nullptr));
        menud_histo->setTitle(QCoreApplication::translate("TP1heritageClass", "choisir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TP1heritageClass: public Ui_TP1heritageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TP1HERITAGE_H
