/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *MI_AD;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *DBbtn;
    QPushButton *pushButton_3;
    QPushButton *Tenantbtn;
    QPushButton *Serbtn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_6;
    QFrame *MIT_AD;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *DB1btn;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QPushButton *Serbtn1;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_16;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLabel *totalroom;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *addroom;
    QComboBox *CBSR;
    QLineEdit *LineEditSearchRoom;
    QPushButton *searchroom;
    QPushButton *Refbtn;
    QTableWidget *table1;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QLabel *totaltenant;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *CBST;
    QLineEdit *LineEditSearchTenant;
    QPushButton *searchtenant;
    QPushButton *RefTenantbtn;
    QTableWidget *TenantTable;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_15;
    QLabel *totalservice;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *addSer;
    QComboBox *CBSS;
    QLineEdit *LineEditSearchSer;
    QPushButton *searchSer;
    QPushButton *RefbtnSer;
    QTableWidget *SerTable;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(1000, 750);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Resources/logoooo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Admin->setWindowIcon(icon);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MI_AD = new QFrame(centralwidget);
        MI_AD->setObjectName("MI_AD");
        MI_AD->setMinimumSize(QSize(71, 0));
        MI_AD->setMaximumSize(QSize(71, 16777215));
        MI_AD->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(0,0,0);\n"
"color:white;\n"
"}\n"
"QPushButtons{\n"
"height:30px;\n"
"}\n"
"QPushButton{\n"
"border:none;\n"
"}"));
        MI_AD->setFrameShape(QFrame::Shape::StyledPanel);
        MI_AD->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(MI_AD);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(5, 30, 5, 10);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(MI_AD);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(40, 40));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Resources/logoooo.png")));
        label_4->setScaledContents(true);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 25, -1, -1);
        DBbtn = new QPushButton(MI_AD);
        DBbtn->setObjectName("DBbtn");
        DBbtn->setMinimumSize(QSize(0, 30));
        DBbtn->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Resources/dashboard.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Resources/dashboard1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        DBbtn->setIcon(icon1);
        DBbtn->setIconSize(QSize(30, 18));
        DBbtn->setCheckable(true);
        DBbtn->setAutoExclusive(true);

        verticalLayout_3->addWidget(DBbtn);

        pushButton_3 = new QPushButton(MI_AD);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(30, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Resources/Room.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Resources/Room1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(30, 18));
        pushButton_3->setCheckable(true);
        pushButton_3->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton_3);

        Tenantbtn = new QPushButton(MI_AD);
        Tenantbtn->setObjectName("Tenantbtn");
        Tenantbtn->setMinimumSize(QSize(0, 30));
        Tenantbtn->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Resources/Person.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Resources/Person1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Resources/Person1.png"), QSize(), QIcon::Mode::Disabled, QIcon::State::Off);
        Tenantbtn->setIcon(icon3);
        Tenantbtn->setIconSize(QSize(30, 18));
        Tenantbtn->setCheckable(true);
        Tenantbtn->setAutoExclusive(true);

        verticalLayout_3->addWidget(Tenantbtn);

        Serbtn = new QPushButton(MI_AD);
        Serbtn->setObjectName("Serbtn");
        Serbtn->setMinimumSize(QSize(0, 30));
        Serbtn->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        Serbtn->setIcon(icon3);
        Serbtn->setIconSize(QSize(30, 18));
        Serbtn->setCheckable(true);
        Serbtn->setAutoExclusive(true);

        verticalLayout_3->addWidget(Serbtn);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 432, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        pushButton_6 = new QPushButton(MI_AD);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Resources/signoutsmall1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Resources/signoutsmall2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(20, 20));
        pushButton_6->setCheckable(true);
        pushButton_6->setAutoExclusive(true);

        verticalLayout_4->addWidget(pushButton_6);


        horizontalLayout->addWidget(MI_AD);

        MIT_AD = new QFrame(centralwidget);
        MIT_AD->setObjectName("MIT_AD");
        MIT_AD->setMinimumSize(QSize(200, 0));
        MIT_AD->setMaximumSize(QSize(0, 16777215));
        MIT_AD->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"}\n"
"QPushButtons{\n"
"height:30px;\n"
"}\n"
"QPushButton{\n"
"border:none;\n"
"}"));
        MIT_AD->setFrameShape(QFrame::Shape::StyledPanel);
        MIT_AD->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(MIT_AD);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(5, 30, 5, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, -1, -1, -1);
        label_3 = new QLabel(MIT_AD);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(40, 40));
        label_3->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Resources/logoooo.png")));
        label_3->setScaledContents(true);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 25, -1, -1);
        DB1btn = new QPushButton(MIT_AD);
        DB1btn->setObjectName("DB1btn");
        DB1btn->setMinimumSize(QSize(0, 30));
        DB1btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"padding-left :-63px\n"
"}\n"
"QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Resources/dashboardbig.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Resources/dashboardbig1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Resources/dashboardbig.png"), QSize(), QIcon::Mode::Disabled, QIcon::State::Off);
        DB1btn->setIcon(icon5);
        DB1btn->setIconSize(QSize(110, 18));
        DB1btn->setCheckable(true);
        DB1btn->setAutoExclusive(true);

        verticalLayout_2->addWidget(DB1btn);

        pushButton_15 = new QPushButton(MIT_AD);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setMinimumSize(QSize(186, 30));
        pushButton_15->setMaximumSize(QSize(16777215, 30));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"padding-left :-43px\n"
"}\n"
"QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/Resources/Roomb1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon6.addFile(QString::fromUtf8(":/new/prefix1/Resources/Roomb2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_15->setIcon(icon6);
        pushButton_15->setIconSize(QSize(110, 18));
        pushButton_15->setCheckable(true);
        pushButton_15->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_15);

        pushButton_17 = new QPushButton(MIT_AD);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setMinimumSize(QSize(186, 30));
        pushButton_17->setMaximumSize(QSize(16777215, 30));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"padding-left :-29px\n"
"}\n"
"QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/Resources/Personb1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon7.addFile(QString::fromUtf8(":/new/prefix1/Resources/Personb2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_17->setIcon(icon7);
        pushButton_17->setIconSize(QSize(115, 18));
        pushButton_17->setCheckable(true);
        pushButton_17->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_17);

        Serbtn1 = new QPushButton(MIT_AD);
        Serbtn1->setObjectName("Serbtn1");
        Serbtn1->setMinimumSize(QSize(186, 30));
        Serbtn1->setMaximumSize(QSize(16777215, 30));
        Serbtn1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"padding-left :-29px\n"
"}\n"
"QPushButton:checked{\n"
"background-color:white;\n"
"border-radius:3px;\n"
"}"));
        Serbtn1->setIcon(icon7);
        Serbtn1->setIconSize(QSize(115, 18));
        Serbtn1->setCheckable(true);
        Serbtn1->setAutoExclusive(true);

        verticalLayout_2->addWidget(Serbtn1);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(222, 418, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        pushButton_16 = new QPushButton(MIT_AD);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setMinimumSize(QSize(0, 20));
        pushButton_16->setMaximumSize(QSize(16777215, 20));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/Resources/signout2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon8.addFile(QString::fromUtf8(":/new/prefix1/Resources/signout1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_16->setIcon(icon8);
        pushButton_16->setIconSize(QSize(100, 60));

        verticalLayout_5->addWidget(pushButton_16);


        horizontalLayout->addWidget(MIT_AD);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"QFrame{\n"
"border:none;\n"
"}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_5 = new QPushButton(frame_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(35, 35));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/Resources/Left.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon9.addFile(QString::fromUtf8(":/new/prefix1/Resources/Right.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_5->setIcon(icon9);
        pushButton_5->setIconSize(QSize(40, 40));
        pushButton_5->setCheckable(true);

        horizontalLayout_5->addWidget(pushButton_5);

        horizontalSpacer_3 = new QSpacerItem(830, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(frame_4);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:none;\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        stackedWidget = new QStackedWidget(frame_3);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 190, 231, 151));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_5->setFont(font1);

        horizontalLayout_9->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        totalroom = new QLabel(page_2);
        totalroom->setObjectName("totalroom");

        horizontalLayout_6->addWidget(totalroom);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        addroom = new QPushButton(page_2);
        addroom->setObjectName("addroom");
        addroom->setMinimumSize(QSize(70, 0));
        addroom->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/Resources/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addroom->setIcon(icon10);
        addroom->setIconSize(QSize(10, 10));
        addroom->setCheckable(false);

        horizontalLayout_7->addWidget(addroom);

        CBSR = new QComboBox(page_2);
        CBSR->addItem(QString());
        CBSR->addItem(QString());
        CBSR->addItem(QString());
        CBSR->addItem(QString());
        CBSR->addItem(QString());
        CBSR->setObjectName("CBSR");

        horizontalLayout_7->addWidget(CBSR);

        LineEditSearchRoom = new QLineEdit(page_2);
        LineEditSearchRoom->setObjectName("LineEditSearchRoom");
        LineEditSearchRoom->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"border: 1px solid gray;\n"
"border-radius: 10px;\n"
"}"));

        horizontalLayout_7->addWidget(LineEditSearchRoom);

        searchroom = new QPushButton(page_2);
        searchroom->setObjectName("searchroom");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/Resources/loupe.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        searchroom->setIcon(icon11);
        searchroom->setCheckable(false);

        horizontalLayout_7->addWidget(searchroom);

        Refbtn = new QPushButton(page_2);
        Refbtn->setObjectName("Refbtn");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1/Resources/reload.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Refbtn->setIcon(icon12);

        horizontalLayout_7->addWidget(Refbtn);


        verticalLayout_6->addLayout(horizontalLayout_7);

        table1 = new QTableWidget(page_2);
        if (table1->columnCount() < 6)
            table1->setColumnCount(6);
        QFont font2;
        font2.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        table1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        table1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        table1->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        table1->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        table1->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font2);
        table1->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        table1->setObjectName("table1");
        table1->setMinimumSize(QSize(0, 500));
        table1->setFont(font2);
        table1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	 border: none;\n"
"}\n"
"QTableWidget::item {\n"
"       border-right: none;\n"
"       border-left: none;\n"
"       border-bottom: 1px solid #D3D3D3;\n"
"}\n"
"QHeaderView::section {\n"
"       border: 1px solid #D3D3D3; \n"
"       border-right: none;      \n"
"       border-left: none;       \n"
"}"));
        table1->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        table1->setAlternatingRowColors(true);
        table1->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        table1->setShowGrid(false);
        table1->horizontalHeader()->setVisible(true);
        table1->horizontalHeader()->setCascadingSectionResizes(false);
        table1->horizontalHeader()->setHighlightSections(true);
        table1->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table1->horizontalHeader()->setStretchLastSection(false);

        verticalLayout_6->addWidget(table1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_7 = new QVBoxLayout(page_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        horizontalLayout_11->addWidget(label_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");

        horizontalLayout_10->addWidget(label_6);

        totaltenant = new QLabel(page_3);
        totaltenant->setObjectName("totaltenant");

        horizontalLayout_10->addWidget(totaltenant);


        horizontalLayout_8->addLayout(horizontalLayout_10);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        CBST = new QComboBox(page_3);
        CBST->addItem(QString());
        CBST->addItem(QString());
        CBST->setObjectName("CBST");

        horizontalLayout_8->addWidget(CBST);

        LineEditSearchTenant = new QLineEdit(page_3);
        LineEditSearchTenant->setObjectName("LineEditSearchTenant");
        LineEditSearchTenant->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"border: 1px solid gray;\n"
"border-radius: 10px;\n"
"}"));

        horizontalLayout_8->addWidget(LineEditSearchTenant);

        searchtenant = new QPushButton(page_3);
        searchtenant->setObjectName("searchtenant");
        searchtenant->setIcon(icon11);
        searchtenant->setCheckable(false);

        horizontalLayout_8->addWidget(searchtenant);

        RefTenantbtn = new QPushButton(page_3);
        RefTenantbtn->setObjectName("RefTenantbtn");
        RefTenantbtn->setIcon(icon12);

        horizontalLayout_8->addWidget(RefTenantbtn);


        verticalLayout_7->addLayout(horizontalLayout_8);

        TenantTable = new QTableWidget(page_3);
        if (TenantTable->columnCount() < 6)
            TenantTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font2);
        TenantTable->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font2);
        TenantTable->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font2);
        TenantTable->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font2);
        TenantTable->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font2);
        TenantTable->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font2);
        TenantTable->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        TenantTable->setObjectName("TenantTable");
        TenantTable->setFont(font2);
        TenantTable->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" 	border: none;\n"
"}\n"
"QTableWidget::item {\n"
"       border-right: none;\n"
"       border-left: none;\n"
"       border-bottom: 1px solid #D3D3D3;\n"
"}\n"
"QHeaderView::section {\n"
"       border: 1px solid #D3D3D3; \n"
"       border-right: none;      \n"
"       border-left: none;       \n"
"}"));
        TenantTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TenantTable->setAlternatingRowColors(true);
        TenantTable->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);

        verticalLayout_7->addWidget(TenantTable);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        verticalLayout_8 = new QVBoxLayout(page_4);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_14 = new QLabel(page_4);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);

        horizontalLayout_21->addWidget(label_14);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_15);


        verticalLayout_8->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_15 = new QLabel(page_4);
        label_15->setObjectName("label_15");

        horizontalLayout_23->addWidget(label_15);

        totalservice = new QLabel(page_4);
        totalservice->setObjectName("totalservice");

        horizontalLayout_23->addWidget(totalservice);


        horizontalLayout_22->addLayout(horizontalLayout_23);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_16);

        addSer = new QPushButton(page_4);
        addSer->setObjectName("addSer");
        addSer->setMinimumSize(QSize(70, 0));
        addSer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        addSer->setIcon(icon10);
        addSer->setIconSize(QSize(10, 10));
        addSer->setCheckable(false);

        horizontalLayout_22->addWidget(addSer);

        CBSS = new QComboBox(page_4);
        CBSS->addItem(QString());
        CBSS->addItem(QString());
        CBSS->addItem(QString());
        CBSS->setObjectName("CBSS");

        horizontalLayout_22->addWidget(CBSS);

        LineEditSearchSer = new QLineEdit(page_4);
        LineEditSearchSer->setObjectName("LineEditSearchSer");
        LineEditSearchSer->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"border: 1px solid gray;\n"
"border-radius: 10px;\n"
"}"));

        horizontalLayout_22->addWidget(LineEditSearchSer);

        searchSer = new QPushButton(page_4);
        searchSer->setObjectName("searchSer");
        searchSer->setIcon(icon11);
        searchSer->setCheckable(false);

        horizontalLayout_22->addWidget(searchSer);

        RefbtnSer = new QPushButton(page_4);
        RefbtnSer->setObjectName("RefbtnSer");
        RefbtnSer->setIcon(icon12);

        horizontalLayout_22->addWidget(RefbtnSer);


        verticalLayout_8->addLayout(horizontalLayout_22);

        SerTable = new QTableWidget(page_4);
        if (SerTable->columnCount() < 5)
            SerTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font2);
        SerTable->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font2);
        SerTable->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font2);
        SerTable->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font2);
        SerTable->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font2);
        SerTable->setHorizontalHeaderItem(4, __qtablewidgetitem16);
        SerTable->setObjectName("SerTable");
        SerTable->setMinimumSize(QSize(0, 500));
        SerTable->setFont(font2);
        SerTable->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	 border: none;\n"
"}\n"
"QTableWidget::item {\n"
"       border-right: none;\n"
"       border-left: none;\n"
"       border-bottom: 1px solid #D3D3D3;\n"
"}\n"
"QHeaderView::section {\n"
"       border: 1px solid #D3D3D3; \n"
"       border-right: none;      \n"
"       border-left: none;       \n"
"}"));
        SerTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        SerTable->setAlternatingRowColors(true);
        SerTable->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        SerTable->setShowGrid(false);
        SerTable->horizontalHeader()->setVisible(true);
        SerTable->horizontalHeader()->setCascadingSectionResizes(false);
        SerTable->horizontalHeader()->setHighlightSections(true);
        SerTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        SerTable->horizontalHeader()->setStretchLastSection(false);

        verticalLayout_8->addWidget(SerTable);

        stackedWidget->addWidget(page_4);

        horizontalLayout_4->addWidget(stackedWidget);


        verticalLayout->addWidget(frame_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 15);

        horizontalLayout->addLayout(verticalLayout);

        Admin->setCentralWidget(centralwidget);

        retranslateUi(Admin);
        QObject::connect(pushButton_15, &QPushButton::toggled, pushButton_3, &QPushButton::setChecked);
        QObject::connect(DB1btn, &QPushButton::toggled, DBbtn, &QPushButton::setChecked);
        QObject::connect(DBbtn, &QPushButton::toggled, DB1btn, &QPushButton::setChecked);
        QObject::connect(pushButton_3, &QPushButton::toggled, pushButton_15, &QPushButton::setChecked);
        QObject::connect(pushButton_5, &QPushButton::toggled, MI_AD, &QFrame::setVisible);
        QObject::connect(pushButton_5, &QPushButton::toggled, MIT_AD, &QFrame::setHidden);
        QObject::connect(pushButton_17, &QPushButton::toggled, Tenantbtn, &QPushButton::setChecked);
        QObject::connect(Tenantbtn, &QPushButton::toggled, pushButton_17, &QPushButton::setChecked);
        QObject::connect(Serbtn1, &QPushButton::toggled, Serbtn, &QPushButton::setChecked);
        QObject::connect(Serbtn, &QPushButton::toggled, Serbtn1, &QPushButton::setChecked);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Room Management System", nullptr));
        label_4->setText(QString());
        DBbtn->setText(QString());
        pushButton_3->setText(QString());
        Tenantbtn->setText(QString());
        Serbtn->setText(QString());
        pushButton_6->setText(QString());
        label_3->setText(QString());
        DB1btn->setText(QString());
        pushButton_15->setText(QString());
        pushButton_17->setText(QString());
        Serbtn1->setText(QString());
        pushButton_16->setText(QString());
        pushButton_5->setText(QString());
        label->setText(QCoreApplication::translate("Admin", "Dashboard", nullptr));
        label_5->setText(QCoreApplication::translate("Admin", "Room List", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "Total: ", nullptr));
        totalroom->setText(QCoreApplication::translate("Admin", "TextLabel", nullptr));
        addroom->setText(QCoreApplication::translate("Admin", "Add Room", nullptr));
        CBSR->setItemText(0, QCoreApplication::translate("Admin", "Room ID", nullptr));
        CBSR->setItemText(1, QCoreApplication::translate("Admin", "Room Type", nullptr));
        CBSR->setItemText(2, QCoreApplication::translate("Admin", "Ph\303\262ng \304\221ang tr\341\273\221ng", nullptr));
        CBSR->setItemText(3, QCoreApplication::translate("Admin", "Ph\303\262ng \304\221\303\243 c\303\263 ng\306\260\341\273\235i thu\303\252", nullptr));
        CBSR->setItemText(4, QCoreApplication::translate("Admin", "Ph\303\262ng \304\221ang b\341\272\243o tr\303\254", nullptr));

        LineEditSearchRoom->setPlaceholderText(QCoreApplication::translate("Admin", "Search here ...", nullptr));
        searchroom->setText(QCoreApplication::translate("Admin", "Search", nullptr));
        Refbtn->setText(QCoreApplication::translate("Admin", "Refresh", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Admin", "M\303\243 ph\303\262ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Admin", "Lo\341\272\241i ph\303\262ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table1->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Admin", "Tr\341\272\241ng th\303\241i", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table1->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Admin", "M\303\243 kh\303\241ch thu\303\252", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table1->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Admin", "Gi\303\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table1->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Admin", "Action", nullptr));
        label_7->setText(QCoreApplication::translate("Admin", "Tenant List", nullptr));
        label_6->setText(QCoreApplication::translate("Admin", "Total: ", nullptr));
        totaltenant->setText(QCoreApplication::translate("Admin", "TextLabel", nullptr));
        CBST->setItemText(0, QCoreApplication::translate("Admin", "Tenant ID", nullptr));
        CBST->setItemText(1, QCoreApplication::translate("Admin", "T\303\252n", nullptr));

        LineEditSearchTenant->setPlaceholderText(QCoreApplication::translate("Admin", "Search here ...", nullptr));
        searchtenant->setText(QCoreApplication::translate("Admin", "Search", nullptr));
        RefTenantbtn->setText(QCoreApplication::translate("Admin", "Refresh", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = TenantTable->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Admin", "Tenant ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TenantTable->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Admin", "T\303\252n", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = TenantTable->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Admin", "S\341\273\221 \304\221i\341\273\207n tho\341\272\241i", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = TenantTable->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Admin", "Tu\341\273\225i", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = TenantTable->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Admin", "CCCD", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = TenantTable->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Admin", "Action", nullptr));
        label_14->setText(QCoreApplication::translate("Admin", "Service List", nullptr));
        label_15->setText(QCoreApplication::translate("Admin", "Total: ", nullptr));
        totalservice->setText(QCoreApplication::translate("Admin", "TextLabel", nullptr));
        addSer->setText(QCoreApplication::translate("Admin", "Add", nullptr));
        CBSS->setItemText(0, QCoreApplication::translate("Admin", "Service ID", nullptr));
        CBSS->setItemText(1, QCoreApplication::translate("Admin", "Service Name", nullptr));
        CBSS->setItemText(2, QString());

        LineEditSearchSer->setPlaceholderText(QCoreApplication::translate("Admin", "Search here ...", nullptr));
        searchSer->setText(QCoreApplication::translate("Admin", "Search", nullptr));
        RefbtnSer->setText(QCoreApplication::translate("Admin", "Refresh", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = SerTable->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Admin", "M\303\243 d\341\273\213ch v\341\273\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = SerTable->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Admin", "T\303\252n d\341\273\213ch v\341\273\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = SerTable->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Admin", "Gi\303\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = SerTable->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Admin", "M\303\264 t\341\272\243", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = SerTable->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Admin", "Action", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
