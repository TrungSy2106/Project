/********************************************************************************
** Form generated from reading UI file 'Createpayment.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPAYMENT_H
#define UI_CREATEPAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Createpayment
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *CBSP;
    QLabel *label_9;
    QLineEdit *LineEditSearchPayment;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *AddSerbtn;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Createpayment)
    {
        if (Createpayment->objectName().isEmpty())
            Createpayment->setObjectName("Createpayment");
        Createpayment->resize(337, 331);
        verticalLayout = new QVBoxLayout(Createpayment);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Createpayment);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        CBSP = new QComboBox(Createpayment);
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->addItem(QString());
        CBSP->setObjectName("CBSP");

        horizontalLayout->addWidget(CBSP);

        label_9 = new QLabel(Createpayment);
        label_9->setObjectName("label_9");

        horizontalLayout->addWidget(label_9);

        LineEditSearchPayment = new QLineEdit(Createpayment);
        LineEditSearchPayment->setObjectName("LineEditSearchPayment");
        LineEditSearchPayment->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"border: 1px solid gray;\n"
"border-radius: 10px;\n"
"}"));

        horizontalLayout->addWidget(LineEditSearchPayment);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(Createpayment);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        AddSerbtn = new QPushButton(Createpayment);
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

        horizontalLayout_3->addWidget(AddSerbtn);

        pushButton_2 = new QPushButton(Createpayment);
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

        horizontalLayout_3->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Createpayment);

        QMetaObject::connectSlotsByName(Createpayment);
    } // setupUi

    void retranslateUi(QDialog *Createpayment)
    {
        Createpayment->setWindowTitle(QCoreApplication::translate("Createpayment", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Createpayment", "Month: ", nullptr));
        CBSP->setItemText(0, QCoreApplication::translate("Createpayment", "Choose", nullptr));
        CBSP->setItemText(1, QCoreApplication::translate("Createpayment", "1", nullptr));
        CBSP->setItemText(2, QCoreApplication::translate("Createpayment", "2", nullptr));
        CBSP->setItemText(3, QCoreApplication::translate("Createpayment", "3", nullptr));
        CBSP->setItemText(4, QCoreApplication::translate("Createpayment", "4", nullptr));
        CBSP->setItemText(5, QCoreApplication::translate("Createpayment", "5", nullptr));
        CBSP->setItemText(6, QCoreApplication::translate("Createpayment", "6", nullptr));
        CBSP->setItemText(7, QCoreApplication::translate("Createpayment", "7", nullptr));
        CBSP->setItemText(8, QCoreApplication::translate("Createpayment", "8", nullptr));
        CBSP->setItemText(9, QCoreApplication::translate("Createpayment", "9", nullptr));
        CBSP->setItemText(10, QCoreApplication::translate("Createpayment", "10", nullptr));
        CBSP->setItemText(11, QCoreApplication::translate("Createpayment", "11", nullptr));
        CBSP->setItemText(12, QCoreApplication::translate("Createpayment", "12", nullptr));

        label_9->setText(QCoreApplication::translate("Createpayment", "Year: ", nullptr));
        LineEditSearchPayment->setText(QString());
        LineEditSearchPayment->setPlaceholderText(QCoreApplication::translate("Createpayment", "Search here ...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Createpayment", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Createpayment", "Room ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Createpayment", "N\306\260\341\273\233c", nullptr));
        AddSerbtn->setText(QCoreApplication::translate("Createpayment", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Createpayment", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Createpayment: public Ui_Createpayment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPAYMENT_H
