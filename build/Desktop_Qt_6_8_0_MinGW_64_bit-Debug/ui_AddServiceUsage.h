/********************************************************************************
** Form generated from reading UI file 'AddServiceUsage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSERVICEUSAGE_H
#define UI_ADDSERVICEUSAGE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddServiceUsage
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *RID;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *SID;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *Quatity;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QDateEdit *UsageDate;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddSerbtn;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddServiceUsage)
    {
        if (AddServiceUsage->objectName().isEmpty())
            AddServiceUsage->setObjectName("AddServiceUsage");
        AddServiceUsage->resize(182, 256);
        verticalLayout_5 = new QVBoxLayout(AddServiceUsage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddServiceUsage);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 15));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        verticalLayout->addWidget(label);

        RID = new QLineEdit(AddServiceUsage);
        RID->setObjectName("RID");
        RID->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(RID);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(AddServiceUsage);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        SID = new QLineEdit(AddServiceUsage);
        SID->setObjectName("SID");
        SID->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(SID);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(AddServiceUsage);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 15));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        Quatity = new QLineEdit(AddServiceUsage);
        Quatity->setObjectName("Quatity");
        Quatity->setMinimumSize(QSize(0, 25));

        verticalLayout_3->addWidget(Quatity);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(AddServiceUsage);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(16777215, 15));
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        UsageDate = new QDateEdit(AddServiceUsage);
        UsageDate->setObjectName("UsageDate");
        UsageDate->setMinimumSize(QSize(0, 25));
        UsageDate->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        UsageDate->setMaximumDateTime(QDateTime(QDate(9999, 12, 31), QTime(4, 59, 59)));
        UsageDate->setMaximumDate(QDate(9999, 12, 31));

        verticalLayout_4->addWidget(UsageDate);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AddSerbtn = new QPushButton(AddServiceUsage);
        AddSerbtn->setObjectName("AddSerbtn");
        AddSerbtn->setMinimumSize(QSize(55, 18));
        AddSerbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"/background-color: #34D481;\n"
"/color:white;\n"
"/border:none;\n"
"/border-radius: 8px;\n"
"/font-weight:bold;\n"
"/font-size: 10px;\n"
"}"));
        AddSerbtn->setCheckable(true);

        horizontalLayout->addWidget(AddSerbtn);

        pushButton_2 = new QPushButton(AddServiceUsage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(18, 18));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"/background-color: #585858;\n"
"/color:white;\n"
"/border:none;\n"
"/border-radius: 8px;\n"
"/font-weight:bold;\n"
"/font-size: 10px;\n"
"}"));
        pushButton_2->setCheckable(true);

        horizontalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(AddServiceUsage);

        QMetaObject::connectSlotsByName(AddServiceUsage);
    } // setupUi

    void retranslateUi(QDialog *AddServiceUsage)
    {
        AddServiceUsage->setWindowTitle(QCoreApplication::translate("AddServiceUsage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddServiceUsage", "Nh\341\272\255p Room ID", nullptr));
        RID->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("AddServiceUsage", "Nh\341\272\255p Service ID", nullptr));
        SID->setPlaceholderText(QString());
        label_3->setText(QCoreApplication::translate("AddServiceUsage", "Nh\341\272\255p Quantity", nullptr));
        Quatity->setPlaceholderText(QString());
        label_4->setText(QCoreApplication::translate("AddServiceUsage", "Usage Date", nullptr));
        UsageDate->setDisplayFormat(QCoreApplication::translate("AddServiceUsage", "d/M/yyyy", nullptr));
        AddSerbtn->setText(QCoreApplication::translate("AddServiceUsage", "Add Serive", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddServiceUsage", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddServiceUsage: public Ui_AddServiceUsage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSERVICEUSAGE_H
