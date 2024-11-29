/********************************************************************************
** Form generated from reading UI file 'editroomdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITROOMDIALOG_H
#define UI_EDITROOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_editroomdialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *newRT;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *Addroombtn;
    QPushButton *pushButton_2;

    void setupUi(QDialog *editroomdialog)
    {
        if (editroomdialog->objectName().isEmpty())
            editroomdialog->setObjectName("editroomdialog");
        editroomdialog->resize(194, 163);
        verticalLayout_3 = new QVBoxLayout(editroomdialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(editroomdialog);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 15));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        verticalLayout->addWidget(label);

        newRT = new QLineEdit(editroomdialog);
        newRT->setObjectName("newRT");
        newRT->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(newRT);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(editroomdialog);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(editroomdialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(comboBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Addroombtn = new QPushButton(editroomdialog);
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

        pushButton_2 = new QPushButton(editroomdialog);
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


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(editroomdialog);

        QMetaObject::connectSlotsByName(editroomdialog);
    } // setupUi

    void retranslateUi(QDialog *editroomdialog)
    {
        editroomdialog->setWindowTitle(QCoreApplication::translate("editroomdialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("editroomdialog", "Lo\341\272\241i ph\303\262ng (Type ID: c\303\263 d\341\272\241ng RT.):", nullptr));
        label_2->setText(QCoreApplication::translate("editroomdialog", "Tr\341\272\241ng th\303\241i", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("editroomdialog", "Tr\341\273\221ng", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("editroomdialog", "\304\220ang b\341\272\243o tr\303\254", nullptr));

        Addroombtn->setText(QCoreApplication::translate("editroomdialog", "Update Room", nullptr));
        pushButton_2->setText(QCoreApplication::translate("editroomdialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editroomdialog: public Ui_editroomdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITROOMDIALOG_H
