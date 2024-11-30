/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QWidget *icon;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_17;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_19;
    QWidget *icon_text;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_12;
    QWidget *widget_2;

    void setupUi(QMainWindow *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1365, 867);
        centralwidget = new QWidget(user);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        icon = new QWidget(widget);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(0, 0, 81, 855));
        icon->setMaximumSize(QSize(81, 16777215));
        icon->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton{\n"
"	height:30px;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(icon);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(icon);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(40, 40));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/logoooo.png")));
        label_4->setScaledContents(true);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 35, -1, -1);
        pushButton_17 = new QPushButton(icon);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/dashboard.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon1.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/dashboard1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_17->setIcon(icon1);
        pushButton_17->setIconSize(QSize(100, 23));
        pushButton_17->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_17);

        pushButton = new QPushButton(icon);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Room.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon2.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Room1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(100, 23));
        pushButton->setCheckable(true);

        verticalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(icon);
        pushButton_3->setObjectName("pushButton_3");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Person.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon3.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Person1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(100, 23));
        pushButton_3->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(icon);
        pushButton_4->setObjectName("pushButton_4");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Service.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(100, 35));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(icon);
        pushButton_5->setObjectName("pushButton_5");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/ServiceUsage.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(100, 35));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(icon);
        pushButton_6->setObjectName("pushButton_6");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/booking.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_6->setIcon(icon6);
        pushButton_6->setIconSize(QSize(100, 28));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_14 = new QPushButton(icon);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Maintenance.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon7.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Room1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_14->setIcon(icon7);
        pushButton_14->setIconSize(QSize(100, 35));
        pushButton_14->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(icon);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/financessmall1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon8.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Room1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_15->setIcon(icon8);
        pushButton_15->setIconSize(QSize(100, 28));
        pushButton_15->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(icon);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/contract.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon9.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Room1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_16->setIcon(icon9);
        pushButton_16->setIconSize(QSize(100, 25));
        pushButton_16->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_16);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(17, 228, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_2);

        pushButton_19 = new QPushButton(icon);
        pushButton_19->setObjectName("pushButton_19");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/signoutsmall1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon10.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/signoutsmall2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_19->setIcon(icon10);
        pushButton_19->setIconSize(QSize(100, 23));
        pushButton_19->setCheckable(true);

        verticalLayout_4->addWidget(pushButton_19);

        icon_text = new QWidget(widget);
        icon_text->setObjectName("icon_text");
        icon_text->setGeometry(QRect(80, 0, 203, 855));
        icon_text->setMaximumSize(QSize(203, 16777215));
        icon_text->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color:white;\n"
"}\n"
"QPushButton{\n"
"	height:30px;\n"
"	border:none;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(icon_text);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 30, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(icon_text);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(40, 40));
        label_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	padding-left :-10px;\n"
"}"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/logoooo.png")));
        label_5->setScaledContents(true);

        horizontalLayout_4->addWidget(label_5);

        label = new QLabel(icon_text);
        label->setObjectName("label");
        label->setMinimumSize(QSize(130, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	padding-right :-10px;\n"
"}"));

        horizontalLayout_4->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 35, -1, -1);
        pushButton_2 = new QPushButton(icon_text);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	padding-left :-10px;\n"
"}\n"
"QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Roomb1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon11.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Roomb2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_2->setIcon(icon11);
        pushButton_2->setIconSize(QSize(250, 23));
        pushButton_2->setCheckable(true);

        verticalLayout->addWidget(pushButton_2);

        pushButton_8 = new QPushButton(icon_text);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	padding-left :-8px;\n"
"}\n"
"QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Personb1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon12.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/Personb2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_8->setIcon(icon12);
        pushButton_8->setIconSize(QSize(250, 23));
        pushButton_8->setCheckable(true);

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(icon_text);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(icon_text);
        pushButton_10->setObjectName("pushButton_10");

        verticalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(icon_text);
        pushButton_11->setObjectName("pushButton_11");

        verticalLayout->addWidget(pushButton_11);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 517, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        pushButton_12 = new QPushButton(icon_text);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"	background-color:white;\n"
"	border-radius:3px;\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/signout2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon13.addFile(QString::fromUtf8("C:/Users/ADMIN/Desktop/Icon/signout1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_12->setIcon(icon13);
        pushButton_12->setIconSize(QSize(100, 12));
        pushButton_12->setCheckable(true);

        verticalLayout_3->addWidget(pushButton_12);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");

        horizontalLayout->addWidget(widget_2);

        user->setCentralWidget(centralwidget);

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QMainWindow *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "MainWindow", nullptr));
        label_4->setText(QString());
        pushButton_17->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        pushButton_19->setText(QString());
        label_5->setText(QString());
        label->setText(QCoreApplication::translate("user", "Room Management", nullptr));
        pushButton_2->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
