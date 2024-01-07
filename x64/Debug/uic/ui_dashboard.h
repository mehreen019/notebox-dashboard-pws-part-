/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboardClass
{
public:
    QWidget *centralWidget;
    QPushButton *noteAdd;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dashboardClass)
    {
        if (dashboardClass->objectName().isEmpty())
            dashboardClass->setObjectName(QString::fromUtf8("dashboardClass"));
        dashboardClass->resize(486, 400);
        centralWidget = new QWidget(dashboardClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        noteAdd = new QPushButton(centralWidget);
        noteAdd->setObjectName(QString::fromUtf8("noteAdd"));
        noteAdd->setGeometry(QRect(170, 110, 151, 61));
        dashboardClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(dashboardClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 486, 26));
        dashboardClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dashboardClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        dashboardClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(dashboardClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        dashboardClass->setStatusBar(statusBar);

        retranslateUi(dashboardClass);

        QMetaObject::connectSlotsByName(dashboardClass);
    } // setupUi

    void retranslateUi(QMainWindow *dashboardClass)
    {
        dashboardClass->setWindowTitle(QCoreApplication::translate("dashboardClass", "dashboard", nullptr));
        noteAdd->setText(QCoreApplication::translate("dashboardClass", "add notes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboardClass: public Ui_dashboardClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
