/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QPushButton *btncancel;
    QPushButton *btnlogin;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *LEUser;
    QLineEdit *LEPass;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(363, 220);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(15);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btncancel = new QPushButton(groupBox);
        btncancel->setObjectName("btncancel");
        btncancel->setGeometry(QRect(180, 110, 91, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(16);
        font1.setBold(true);
        btncancel->setFont(font1);
        btnlogin = new QPushButton(groupBox);
        btnlogin->setObjectName("btnlogin");
        btnlogin->setGeometry(QRect(70, 110, 91, 31));
        btnlogin->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 111, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(16);
        font2.setBold(false);
        label_2->setFont(font2);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 111, 21));
        label->setFont(font2);
        LEUser = new QLineEdit(groupBox);
        LEUser->setObjectName("LEUser");
        LEUser->setGeometry(QRect(130, 30, 191, 31));
        LEUser->setFont(font1);
        LEUser->setEchoMode(QLineEdit::EchoMode::Normal);
        LEPass = new QLineEdit(groupBox);
        LEPass->setObjectName("LEPass");
        LEPass->setGeometry(QRect(130, 70, 191, 31));
        LEPass->setFont(font1);
        LEPass->setEchoMode(QLineEdit::EchoMode::Password);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 160, 151, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(11);
        font3.setBold(false);
        label_3->setFont(font3);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 160, 61, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(10);
        font4.setBold(true);
        pushButton->setFont(font4);

        verticalLayout->addWidget(groupBox);

        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("login", "Wellcome", nullptr));
        btncancel->setText(QCoreApplication::translate("login", "Cancel", nullptr));
        btnlogin->setText(QCoreApplication::translate("login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password:", nullptr));
        label->setText(QCoreApplication::translate("login", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Don't have an account?", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
