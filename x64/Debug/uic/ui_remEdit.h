/********************************************************************************
** Form generated from reading UI file 'remEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMEDIT_H
#define UI_REMEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remEditClass
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *remove;
    QPushButton *save;
    QPushButton *goBack;

    void setupUi(QDialog *remEditClass)
    {
        if (remEditClass->objectName().isEmpty())
            remEditClass->setObjectName(QString::fromUtf8("remEditClass"));
        remEditClass->resize(670, 639);
        label = new QLabel(remEditClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 49, 171, 41));
        listWidget = new QListWidget(remEditClass);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 120, 551, 401));
        layoutWidget = new QWidget(remEditClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 540, 295, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        remove = new QPushButton(layoutWidget);
        remove->setObjectName(QString::fromUtf8("remove"));

        horizontalLayout->addWidget(remove);

        save = new QPushButton(layoutWidget);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout->addWidget(save);

        goBack = new QPushButton(layoutWidget);
        goBack->setObjectName(QString::fromUtf8("goBack"));

        horizontalLayout->addWidget(goBack);


        retranslateUi(remEditClass);

        QMetaObject::connectSlotsByName(remEditClass);
    } // setupUi

    void retranslateUi(QDialog *remEditClass)
    {
        remEditClass->setWindowTitle(QCoreApplication::translate("remEditClass", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("remEditClass", "       Reminders", nullptr));
        remove->setText(QCoreApplication::translate("remEditClass", "Remove", nullptr));
        save->setText(QCoreApplication::translate("remEditClass", "Save", nullptr));
        goBack->setText(QCoreApplication::translate("remEditClass", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remEditClass: public Ui_remEditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMEDIT_H
