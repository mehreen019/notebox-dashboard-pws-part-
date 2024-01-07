/********************************************************************************
** Form generated from reading UI file 'cell.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_H
#define UI_CELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cellClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *titlePlace;
    QPushButton *displayImage;
    QPushButton *deleteTask;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cellClass)
    {
        if (cellClass->objectName().isEmpty())
            cellClass->setObjectName(QString::fromUtf8("cellClass"));
        cellClass->resize(477, 228);
        cellClass->setMaximumSize(QSize(563, 400));
        centralWidget = new QWidget(cellClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        titlePlace = new QLabel(groupBox);
        titlePlace->setObjectName(QString::fromUtf8("titlePlace"));
        titlePlace->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));

        verticalLayout->addWidget(titlePlace);

        displayImage = new QPushButton(groupBox);
        displayImage->setObjectName(QString::fromUtf8("displayImage"));

        verticalLayout->addWidget(displayImage);

        deleteTask = new QPushButton(groupBox);
        deleteTask->setObjectName(QString::fromUtf8("deleteTask"));

        verticalLayout->addWidget(deleteTask);


        horizontalLayout_2->addWidget(groupBox);

        cellClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cellClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 477, 26));
        cellClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cellClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        cellClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cellClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        cellClass->setStatusBar(statusBar);

        retranslateUi(cellClass);

        QMetaObject::connectSlotsByName(cellClass);
    } // setupUi

    void retranslateUi(QMainWindow *cellClass)
    {
        cellClass->setWindowTitle(QCoreApplication::translate("cellClass", "cell", nullptr));
        groupBox->setTitle(QCoreApplication::translate("cellClass", "GroupBox", nullptr));
        titlePlace->setText(QCoreApplication::translate("cellClass", "<html><head/><body><p align=\"center\"><span style=\" color:#000000;\">TextLabel</span></p></body></html>", nullptr));
        displayImage->setText(QCoreApplication::translate("cellClass", "display image", nullptr));
        deleteTask->setText(QCoreApplication::translate("cellClass", "delete task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cellClass: public Ui_cellClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_H
