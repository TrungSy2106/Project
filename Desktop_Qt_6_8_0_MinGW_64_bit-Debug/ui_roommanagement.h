/********************************************************************************
** Form generated from reading UI file 'roommanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMMANAGEMENT_H
#define UI_ROOMMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_roommanagement
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *roommanagement)
    {
        if (roommanagement->objectName().isEmpty())
            roommanagement->setObjectName("roommanagement");
        roommanagement->resize(549, 332);
        centralwidget = new QWidget(roommanagement);
        centralwidget->setObjectName("centralwidget");
        roommanagement->setCentralWidget(centralwidget);
        menubar = new QMenuBar(roommanagement);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 549, 18));
        roommanagement->setMenuBar(menubar);
        statusbar = new QStatusBar(roommanagement);
        statusbar->setObjectName("statusbar");
        roommanagement->setStatusBar(statusbar);

        retranslateUi(roommanagement);

        QMetaObject::connectSlotsByName(roommanagement);
    } // setupUi

    void retranslateUi(QMainWindow *roommanagement)
    {
        roommanagement->setWindowTitle(QCoreApplication::translate("roommanagement", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class roommanagement: public Ui_roommanagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMMANAGEMENT_H
