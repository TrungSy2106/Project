/********************************************************************************
** Form generated from reading UI file 'Roomdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMDIALOG_H
#define UI_ROOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RoomDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *newRT;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *Addroombtn;
    QPushButton *pushButton_2;

    void setupUi(QDialog *RoomDialog)
    {
        if (RoomDialog->objectName().isEmpty())
            RoomDialog->setObjectName("RoomDialog");
        RoomDialog->resize(219, 111);
        RoomDialog->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color:white;\n"
"}\n"
"QLineEdit{\n"
"border: 1px solid gray;\n"
"border-radius: 6px;\n"
"padding-left: 15px;\n"
"height: 25px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(RoomDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(RoomDialog);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 15));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        verticalLayout->addWidget(label);

        newRT = new QLineEdit(RoomDialog);
        newRT->setObjectName("newRT");
        newRT->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(newRT);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Addroombtn = new QPushButton(RoomDialog);
        Addroombtn->setObjectName("Addroombtn");
        Addroombtn->setMinimumSize(QSize(55, 18));
        Addroombtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #34D481;\n"
"color:white;\n"
"border:none;\n"
"border-radius: 8px;\n"
"font-weight:bold;\n"
"font-size: 10px;\n"
"}"));
        Addroombtn->setCheckable(true);

        horizontalLayout->addWidget(Addroombtn);

        pushButton_2 = new QPushButton(RoomDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(18, 18));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #585858;\n"
"color:white;\n"
"border:none;\n"
"border-radius: 8px;\n"
"font-weight:bold;\n"
"font-size: 10px;\n"
"}"));
        pushButton_2->setCheckable(true);

        horizontalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(RoomDialog);
        QObject::connect(pushButton_2, &QPushButton::toggled, RoomDialog, qOverload<>(&QDialog::close));
        QObject::connect(Addroombtn, &QPushButton::toggled, RoomDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(RoomDialog);
    } // setupUi

    void retranslateUi(QDialog *RoomDialog)
    {
        RoomDialog->setWindowTitle(QCoreApplication::translate("RoomDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RoomDialog", "Loai phong (Type ID: co dang RT.):", nullptr));
        Addroombtn->setText(QCoreApplication::translate("RoomDialog", "Add Room", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RoomDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomDialog: public Ui_RoomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMDIALOG_H
