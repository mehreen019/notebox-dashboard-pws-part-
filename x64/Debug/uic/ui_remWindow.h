/********************************************************************************
** Form generated from reading UI file 'remWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMWINDOW_H
#define UI_REMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remWindowClass
{
public:
    QWidget *centralwidget;
    QPushButton *reminder_add;
    QLabel *label_2;
    QLineEdit *Reminders;
    QDateTimeEdit *reminder_date;
    QPushButton *Edit_button;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *remWindowClass)
    {
        if (remWindowClass->objectName().isEmpty())
            remWindowClass->setObjectName(QString::fromUtf8("remWindowClass"));
        remWindowClass->resize(800, 773);
        centralwidget = new QWidget(remWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        reminder_add = new QPushButton(centralwidget);
        reminder_add->setObjectName(QString::fromUtf8("reminder_add"));
        reminder_add->setGeometry(QRect(560, 460, 83, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 340, 58, 29));
        Reminders = new QLineEdit(centralwidget);
        Reminders->setObjectName(QString::fromUtf8("Reminders"));
        Reminders->setGeometry(QRect(170, 340, 601, 81));
        reminder_date = new QDateTimeEdit(centralwidget);
        reminder_date->setObjectName(QString::fromUtf8("reminder_date"));
        reminder_date->setGeometry(QRect(190, 210, 287, 29));
        Edit_button = new QPushButton(centralwidget);
        Edit_button->setObjectName(QString::fromUtf8("Edit_button"));
        Edit_button->setGeometry(QRect(660, 460, 83, 29));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 219, 101, 21));
        remWindowClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(remWindowClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        remWindowClass->setMenuBar(menubar);
        statusbar = new QStatusBar(remWindowClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        remWindowClass->setStatusBar(statusbar);

        retranslateUi(remWindowClass);

        QMetaObject::connectSlotsByName(remWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *remWindowClass)
    {
        remWindowClass->setWindowTitle(QCoreApplication::translate("remWindowClass", "MainWindow", nullptr));
        reminder_add->setText(QCoreApplication::translate("remWindowClass", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("remWindowClass", "Message", nullptr));
        Edit_button->setText(QCoreApplication::translate("remWindowClass", "Edit", nullptr));
        label->setText(QCoreApplication::translate("remWindowClass", "Date and time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remWindowClass: public Ui_remWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMWINDOW_H
