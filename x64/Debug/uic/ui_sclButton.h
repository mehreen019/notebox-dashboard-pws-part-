/********************************************************************************
** Form generated from reading UI file 'sclButton.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCLBUTTON_H
#define UI_SCLBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sclButtonClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLineEdit *title;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLineEdit *date;
    QGroupBox *groupBox_4;
    QLabel *label_3;
    QLineEdit *category;
    QGroupBox *groupBox_5;
    QLabel *label_4;
    QLineEdit *topic;
    QGroupBox *groupBox_6;
    QLabel *label_5;
    QLineEdit *subject;
    QPushButton *imgUpload;
    QPushButton *infoSubmit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sclButtonClass)
    {
        if (sclButtonClass->objectName().isEmpty())
            sclButtonClass->setObjectName(QString::fromUtf8("sclButtonClass"));
        sclButtonClass->resize(600, 400);
        centralWidget = new QWidget(sclButtonClass);
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
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 55, 16));
        title = new QLineEdit(groupBox_2);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(120, 10, 411, 22));

        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 10, 55, 16));
        date = new QLineEdit(groupBox_3);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(120, 10, 411, 22));

        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 55, 16));
        category = new QLineEdit(groupBox_4);
        category->setObjectName(QString::fromUtf8("category"));
        category->setGeometry(QRect(120, 10, 411, 22));

        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 10, 55, 16));
        topic = new QLineEdit(groupBox_5);
        topic->setObjectName(QString::fromUtf8("topic"));
        topic->setGeometry(QRect(120, 10, 411, 22));

        verticalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 10, 55, 16));
        subject = new QLineEdit(groupBox_6);
        subject->setObjectName(QString::fromUtf8("subject"));
        subject->setGeometry(QRect(120, 10, 411, 22));

        verticalLayout_2->addWidget(groupBox_6);

        imgUpload = new QPushButton(groupBox);
        imgUpload->setObjectName(QString::fromUtf8("imgUpload"));

        verticalLayout_2->addWidget(imgUpload);

        infoSubmit = new QPushButton(groupBox);
        infoSubmit->setObjectName(QString::fromUtf8("infoSubmit"));

        verticalLayout_2->addWidget(infoSubmit);


        verticalLayout->addWidget(groupBox);

        sclButtonClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(sclButtonClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sclButtonClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sclButtonClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        sclButtonClass->setStatusBar(statusBar);

        retranslateUi(sclButtonClass);

        QMetaObject::connectSlotsByName(sclButtonClass);
    } // setupUi

    void retranslateUi(QMainWindow *sclButtonClass)
    {
        sclButtonClass->setWindowTitle(QCoreApplication::translate("sclButtonClass", "sclButton", nullptr));
        groupBox->setTitle(QCoreApplication::translate("sclButtonClass", "GroupBox", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("sclButtonClass", "title", nullptr));
        groupBox_3->setTitle(QString());
        label_2->setText(QCoreApplication::translate("sclButtonClass", "date", nullptr));
        groupBox_4->setTitle(QString());
        label_3->setText(QCoreApplication::translate("sclButtonClass", "category", nullptr));
        groupBox_5->setTitle(QString());
        label_4->setText(QCoreApplication::translate("sclButtonClass", "topic", nullptr));
        groupBox_6->setTitle(QString());
        label_5->setText(QCoreApplication::translate("sclButtonClass", "subject", nullptr));
        imgUpload->setText(QCoreApplication::translate("sclButtonClass", "upload image", nullptr));
        infoSubmit->setText(QCoreApplication::translate("sclButtonClass", "submit info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sclButtonClass: public Ui_sclButtonClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCLBUTTON_H
