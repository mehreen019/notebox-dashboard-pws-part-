/********************************************************************************
** Form generated from reading UI file 'wsCell.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSCELL_H
#define UI_WSCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wsCellClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *display;
    QPushButton *delete2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *wsCellClass)
    {
        if (wsCellClass->objectName().isEmpty())
            wsCellClass->setObjectName(QString::fromUtf8("wsCellClass"));
        wsCellClass->resize(650, 220);
        wsCellClass->setMaximumSize(QSize(650, 220));
        centralWidget = new QWidget(wsCellClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));

        verticalLayout_2->addWidget(label);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        display = new QPushButton(groupBox_2);
        display->setObjectName(QString::fromUtf8("display"));

        horizontalLayout->addWidget(display);

        delete2 = new QPushButton(groupBox_2);
        delete2->setObjectName(QString::fromUtf8("delete2"));

        horizontalLayout->addWidget(delete2);


        verticalLayout_2->addWidget(groupBox_2);


        verticalLayout->addWidget(groupBox);

        wsCellClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(wsCellClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        wsCellClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(wsCellClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        wsCellClass->setStatusBar(statusBar);

        retranslateUi(wsCellClass);

        QMetaObject::connectSlotsByName(wsCellClass);
    } // setupUi

    void retranslateUi(QMainWindow *wsCellClass)
    {
        wsCellClass->setWindowTitle(QCoreApplication::translate("wsCellClass", "wsCell", nullptr));
        groupBox->setTitle(QCoreApplication::translate("wsCellClass", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("wsCellClass", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("wsCellClass", "GroupBox", nullptr));
        display->setText(QCoreApplication::translate("wsCellClass", "display", nullptr));
        delete2->setText(QCoreApplication::translate("wsCellClass", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wsCellClass: public Ui_wsCellClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSCELL_H
