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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboardClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *noteAdd;
    QPushButton *ws_button;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *dashboardClass)
    {
        if (dashboardClass->objectName().isEmpty())
            dashboardClass->setObjectName(QString::fromUtf8("dashboardClass"));
        dashboardClass->resize(497, 395);
        centralWidget = new QWidget(dashboardClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);

        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        noteAdd = new QPushButton(centralWidget);
        noteAdd->setObjectName(QString::fromUtf8("noteAdd"));

        gridLayout->addWidget(noteAdd, 1, 0, 1, 1);

        ws_button = new QPushButton(centralWidget);
        ws_button->setObjectName(QString::fromUtf8("ws_button"));

        gridLayout->addWidget(ws_button, 2, 0, 1, 1);

        dashboardClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(dashboardClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        dashboardClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(dashboardClass);

        QMetaObject::connectSlotsByName(dashboardClass);
    } // setupUi

    void retranslateUi(QMainWindow *dashboardClass)
    {
        dashboardClass->setWindowTitle(QCoreApplication::translate("dashboardClass", "dashboard", nullptr));
        noteAdd->setText(QCoreApplication::translate("dashboardClass", "add notes", nullptr));
        ws_button->setText(QCoreApplication::translate("dashboardClass", "view public workspace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboardClass: public Ui_dashboardClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
