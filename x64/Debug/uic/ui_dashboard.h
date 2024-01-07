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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboardClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *noteAdd;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dashboardClass)
    {
        if (dashboardClass->objectName().isEmpty())
            dashboardClass->setObjectName(QString::fromUtf8("dashboardClass"));
        dashboardClass->resize(489, 383);
        centralWidget = new QWidget(dashboardClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        noteAdd = new QPushButton(centralWidget);
        noteAdd->setObjectName(QString::fromUtf8("noteAdd"));

        gridLayout_2->addWidget(noteAdd, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        dashboardClass->setCentralWidget(centralWidget);
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
