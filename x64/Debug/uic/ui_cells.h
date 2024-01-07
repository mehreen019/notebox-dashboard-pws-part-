/********************************************************************************
** Form generated from reading UI file 'cells.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELLS_H
#define UI_CELLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *titlePlace;
    QGraphicsView *cross;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(558, 70);
        titlePlace = new QLabel(Dialog);
        titlePlace->setObjectName(QString::fromUtf8("titlePlace"));
        titlePlace->setGeometry(QRect(30, 20, 441, 31));
        cross = new QGraphicsView(Dialog);
        cross->setObjectName(QString::fromUtf8("cross"));
        cross->setGeometry(QRect(490, 10, 41, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        titlePlace->setText(QCoreApplication::translate("Dialog", "title of the document", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLS_H
