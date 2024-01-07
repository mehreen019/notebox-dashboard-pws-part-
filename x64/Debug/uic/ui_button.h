/********************************************************************************
** Form generated from reading UI file 'button.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_H
#define UI_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buttonClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *upload;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_title;
    QLineEdit *lineEdit_date;
    QPushButton *submit_info;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *buttonClass)
    {
        if (buttonClass->objectName().isEmpty())
            buttonClass->setObjectName(QString::fromUtf8("buttonClass"));
        buttonClass->resize(600, 400);
        centralWidget = new QWidget(buttonClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(140, 10, 321, 301));
        upload = new QPushButton(groupBox);
        upload->setObjectName(QString::fromUtf8("upload"));
        upload->setGeometry(QRect(80, 170, 161, 41));
        upload->setAutoDefault(true);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 71, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 71, 31));
        lineEdit_title = new QLineEdit(groupBox);
        lineEdit_title->setObjectName(QString::fromUtf8("lineEdit_title"));
        lineEdit_title->setGeometry(QRect(80, 40, 201, 31));
        lineEdit_date = new QLineEdit(groupBox);
        lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(80, 100, 201, 31));
        submit_info = new QPushButton(groupBox);
        submit_info->setObjectName(QString::fromUtf8("submit_info"));
        submit_info->setGeometry(QRect(20, 230, 281, 51));
        buttonClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(buttonClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        buttonClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(buttonClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        buttonClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(buttonClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        buttonClass->setStatusBar(statusBar);
#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit_title);
        label_2->setBuddy(lineEdit_date);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEdit_title, lineEdit_date);
        QWidget::setTabOrder(lineEdit_date, upload);

        retranslateUi(buttonClass);

        upload->setDefault(true);


        QMetaObject::connectSlotsByName(buttonClass);
    } // setupUi

    void retranslateUi(QMainWindow *buttonClass)
    {
        buttonClass->setWindowTitle(QCoreApplication::translate("buttonClass", "button", nullptr));
        groupBox->setTitle(QCoreApplication::translate("buttonClass", "upload notes", nullptr));
        upload->setText(QCoreApplication::translate("buttonClass", "upload image", nullptr));
        label->setText(QCoreApplication::translate("buttonClass", "title", nullptr));
        label_2->setText(QCoreApplication::translate("buttonClass", "date", nullptr));
        submit_info->setText(QCoreApplication::translate("buttonClass", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buttonClass: public Ui_buttonClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_H
