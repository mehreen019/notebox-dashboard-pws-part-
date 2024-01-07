/********************************************************************************
** Form generated from reading UI file 'image.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_H
#define UI_IMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imageClass
{
public:
    QWidget *centralWidget;
    QLabel *picLabel;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *imageClass)
    {
        if (imageClass->objectName().isEmpty())
            imageClass->setObjectName(QString::fromUtf8("imageClass"));
        imageClass->resize(440, 400);
        centralWidget = new QWidget(imageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        picLabel = new QLabel(centralWidget);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        picLabel->setGeometry(QRect(60, 20, 341, 301));
        imageClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(imageClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        imageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(imageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        imageClass->setStatusBar(statusBar);

        retranslateUi(imageClass);

        QMetaObject::connectSlotsByName(imageClass);
    } // setupUi

    void retranslateUi(QMainWindow *imageClass)
    {
        imageClass->setWindowTitle(QCoreApplication::translate("imageClass", "image", nullptr));
        picLabel->setText(QCoreApplication::translate("imageClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imageClass: public Ui_imageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_H
