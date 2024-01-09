/********************************************************************************
** Form generated from reading UI file 'publicWorkspace.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLICWORKSPACE_H
#define UI_PUBLICWORKSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_publicWorkspaceClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *toDash;
    QGridLayout *gridLayout_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *publicWorkspaceClass)
    {
        if (publicWorkspaceClass->objectName().isEmpty())
            publicWorkspaceClass->setObjectName(QString::fromUtf8("publicWorkspaceClass"));
        publicWorkspaceClass->resize(594, 402);
        centralWidget = new QWidget(publicWorkspaceClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toDash = new QPushButton(centralWidget);
        toDash->setObjectName(QString::fromUtf8("toDash"));

        gridLayout->addWidget(toDash, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        publicWorkspaceClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(publicWorkspaceClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        publicWorkspaceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(publicWorkspaceClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        publicWorkspaceClass->setStatusBar(statusBar);

        retranslateUi(publicWorkspaceClass);

        QMetaObject::connectSlotsByName(publicWorkspaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *publicWorkspaceClass)
    {
        publicWorkspaceClass->setWindowTitle(QCoreApplication::translate("publicWorkspaceClass", "publicWorkspace", nullptr));
        toDash->setText(QCoreApplication::translate("publicWorkspaceClass", "view dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class publicWorkspaceClass: public Ui_publicWorkspaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLICWORKSPACE_H
