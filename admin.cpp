#include "admin.h"
#include "ui_admin.h"
#include <QFile>
#include "Room.h"
#include "Tenant.h"
#include "Service.h"
#include "Addroom.h"
#include "AddService.h"
#include "Editroom.h"
#include "Edittenant.h"
#include "Editservice.h"
#include <QMessageBox>
#include <QPropertyAnimation>


Admin::Admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
    ui->MI_AD->setHidden(true);
    animation = new QPropertyAnimation(ui->MIT_AD, "minimumWidth");
    managerooms();
    managetenants();
    manageservice();
    connect(ui->LineEditSearchTenant, &QLineEdit::returnPressed, this, [this]() {
        ui->searchtenant->click();
    });
    connect(ui->LineEditSearchRoom, &QLineEdit::returnPressed, this, [this]() {
        ui->searchroom->click();
    });
}

Admin::~Admin()
{
    delete ui;
    delete animation;
}

void Admin::moverMenu()
{
    int width = ui->MIT_AD->width();
    int normal = 71;
    int extender;

    if (width == 71) {
        extender = 245;
        QPropertyAnimation *animation = new QPropertyAnimation(ui->MIT_AD, "minimumWidth");
        ui->MI_AD->setVisible(false);  // Hiển thị MI_AD
        ui->MIT_AD->setHidden(false); // Ẩn MIT_AD
        animation->setDuration(300);
        animation->setStartValue(width);
        animation->setEndValue(extender);
        animation->setEasingCurve(QEasingCurve::InOutQuart);
        animation->start(QAbstractAnimation::DeleteWhenStopped);
    } else {
        extender = normal;
        QPropertyAnimation *animation = new QPropertyAnimation(ui->MIT_AD, "minimumWidth");
        animation->setDuration(300);
        animation->setStartValue(width);
        animation->setEndValue(extender);
        animation->setEasingCurve(QEasingCurve::InOutQuart);
        connect(animation, &QPropertyAnimation::finished, this, [this]() {
            ui->MI_AD->setVisible(true);  // Hiển thị MI_AD
            ui->MIT_AD->setHidden(true); // Ẩn MIT_AD
        });
        animation->start(QAbstractAnimation::DeleteWhenStopped);

    }


}

void Admin::managerooms(){
    Room::showAllRooms(this);
    ui->totalroom->setText(QString::number(Room::total));
    ui->table1->horizontalHeader()->setStyleSheet("QHeaderView::section { border: none; }");
    ui->table1->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->table1->horizontalHeaderItem(ui->table1->columnCount() - 1)->setTextAlignment(Qt::AlignCenter);
    ui->table1->setColumnWidth(0, 150);
    ui->table1->setColumnWidth(1, 150);
    ui->table1->setColumnWidth(2, 150);
    ui->table1->setColumnWidth(3, 150);
    ui->table1->setColumnWidth(4, 150);
    ui->table1->setColumnWidth(5, 150);
    ui->table1->verticalHeader()->hide();
    QRect headerRect = ui->table1->visualRect(ui->table1->model()->index(0, 0));

    QPushButton* sortButton = new QPushButton(ui->table1);
    sortButton->setText("");
    sortButton->setIcon(QIcon(":/new/prefix1/Resources/sxtang.png"));
    sortButton->setFixedSize(16, 16);
    sortButton->setToolTip("Sort by Room ID");
    sortButton->move(headerRect.right() - 90, headerRect.top() + 2);
    sortButton->setCheckable(true);
    connect(sortButton, &QPushButton::toggled, this, [this, sortButton](bool checked) {
        if (checked) {
            sortButton->setIcon(QIcon(":/new/prefix1/Resources/sxgiam.png"));
            Room::Descending();
            ui->table1->clearContents();
            ui->table1->setRowCount(0);
            Room::showAllRooms(this);
        } else {
            sortButton->setIcon(QIcon(":/new/prefix1/Resources/sxtang.png"));
            Room::Ascending();
            ui->table1->clearContents();
            ui->table1->setRowCount(0);
            Room::showAllRooms(this);
        }
    });
}

void Admin::managetenants(){
    Tenant::showAllTenants(this);
    ui->totaltenant->setText(QString::number(Tenant::total));
    // ui->TenantTable->horizontalHeader()->setStyleSheet("QHeaderView::section { border: none; }");
    ui->TenantTable->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->TenantTable->horizontalHeaderItem(ui->TenantTable->columnCount() - 1)->setTextAlignment(Qt::AlignCenter);
    ui->TenantTable->setColumnWidth(0, 150);
    ui->TenantTable->setColumnWidth(1, 150);
    ui->TenantTable->setColumnWidth(2, 150);
    ui->TenantTable->setColumnWidth(3, 150);
    ui->TenantTable->setColumnWidth(4, 150);
    ui->TenantTable->setColumnWidth(5, 150);
    ui->TenantTable->verticalHeader()->hide();
    ui->TenantTable->setShowGrid(false);
    // QRect headerRect = ui->TenantTable->visualRect(ui->TenantTable->model()->index(0, 0));
}

void Admin::manageservice(){
    Service::showAllServices(this);
    ui->totalservice->setText(QString::number(Service::total));
    // ui->SerTable->horizontalHeader()->setStyleSheet("QHeaderView::section { border: none; }");
    ui->SerTable->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->SerTable->horizontalHeaderItem(ui->SerTable->columnCount() - 1)->setTextAlignment(Qt::AlignCenter);
    ui->SerTable->setColumnWidth(0, 150);
    ui->SerTable->setColumnWidth(1, 150);
    ui->SerTable->setColumnWidth(2, 150);
    ui->SerTable->setColumnWidth(3, 150);
    ui->SerTable->setColumnWidth(4, 150);
    ui->SerTable->verticalHeader()->hide();
    ui->SerTable->setShowGrid(false);
    // QRect headerRect = ui->SerTable->visualRect(ui->SerTable->model()->index(0, 0));
}

void Admin::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}




void Admin::on_pushButton_15_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void Admin::displayRoom(const Room& room) {
    int row = ui->table1->rowCount();
    ui->table1->insertRow(row);

    ui->table1->setItem(row, 0, new QTableWidgetItem(room.room_ID));
    ui->table1->setItem(row, 1, new QTableWidgetItem(room.roomType.getID()));
    QString status;
    if (room.status==0) status = "Trống";
    else if (room.status==1) status = "Đã có người thuê";
    else if (room.status==2) status = "Đang bảo trì";
    ui->table1->setItem(row, 2, new QTableWidgetItem(status));
    ui->table1->setItem(row, 3, new QTableWidgetItem(room.tenant_ID.isEmpty() ? "N/A" : room.getTenantID()));
    ui->table1->setItem(row, 4, new QTableWidgetItem(QString::number(room.roomType.getPrice(), 'f', 2)));
    QWidget* buttonWidget = new QWidget();

    QPushButton* editButton = new QPushButton();
    editButton->setIcon(QIcon(":/new/prefix1/Resources/edit.png"));
    editButton->setToolTip("Edit this room");
    connect(editButton, &QPushButton::clicked, this, [this, row]() {
        onEditButtonClicked(row);
    });

    QPushButton* deleteButton = new QPushButton();
    deleteButton->setIcon(QIcon(":/new/prefix1/Resources/delete.png"));
    deleteButton->setToolTip("Delete this room");
    connect(deleteButton, &QPushButton::clicked, this, [this, row]() {
        onDeleteButtonClicked(row);
    });

    QHBoxLayout* layout = new QHBoxLayout(buttonWidget);
    layout->addWidget(editButton);
    layout->addWidget(deleteButton);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    editButton->setFixedSize(20, 20);
    deleteButton->setFixedSize(20, 20);

    buttonWidget->setLayout(layout);

    ui->table1->setCellWidget(row, 5, buttonWidget);
}

void Admin::displayTenant(const Tenant& t) {
    int row = ui->TenantTable->rowCount();
    ui->TenantTable->insertRow(row);

    ui->TenantTable->setItem(row, 0, new QTableWidgetItem(t.tenant_ID));
    ui->TenantTable->setItem(row, 1, new QTableWidgetItem(t.name));
    ui->TenantTable->setItem(row, 2, new QTableWidgetItem(t.phone));
    ui->TenantTable->setItem(row, 3, new QTableWidgetItem(QString::number(t.age)));
    ui->TenantTable->setItem(row, 4, new QTableWidgetItem(t.cccd));
    QWidget* buttonWidget = new QWidget();

    QPushButton* edit_tenant_btn = new QPushButton();
    edit_tenant_btn->setIcon(QIcon(":/new/prefix1/Resources/edit.png"));
    edit_tenant_btn->setToolTip("Edit this room");
    connect(edit_tenant_btn, &QPushButton::clicked, this, [this, row]() {
        onedit_tenant_btnClicked(row);
    });

    QPushButton* delete_tenant_btn = new QPushButton();
    delete_tenant_btn->setIcon(QIcon(":/new/prefix1/Resources/delete.png"));
    delete_tenant_btn->setToolTip("Delete this room");
    connect(delete_tenant_btn, &QPushButton::clicked, this, [this, row]() {
        onDeleteButtonClicked(row);
    });

    QHBoxLayout* layout = new QHBoxLayout(buttonWidget);
    layout->addWidget(edit_tenant_btn);
    layout->addWidget(delete_tenant_btn);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    edit_tenant_btn->setFixedSize(20, 20);
    delete_tenant_btn->setFixedSize(20, 20);

    buttonWidget->setLayout(layout);

    ui->TenantTable->setCellWidget(row, 5, buttonWidget);
}

void Admin::displayService(const Service& s) {
    int row = ui->SerTable->rowCount();
    ui->SerTable->insertRow(row);

    ui->SerTable->setItem(row, 0, new QTableWidgetItem(s.service_ID));
    ui->SerTable->setItem(row, 1, new QTableWidgetItem(s.name));
    ui->SerTable->setItem(row, 2, new QTableWidgetItem(QString::number(s.unit_price)));
    ui->SerTable->setItem(row, 3, new QTableWidgetItem(s.description));
    QWidget* buttonWidget = new QWidget();

    QPushButton* edit_Ser_btn = new QPushButton();
    edit_Ser_btn->setIcon(QIcon(":/new/prefix1/Resources/edit.png"));
    edit_Ser_btn->setToolTip("Edit this room");
    connect(edit_Ser_btn, &QPushButton::clicked, this, [this, row]() {
        onedit_Ser_btnClicked(row);
    });

    QPushButton* delete_Ser_btn = new QPushButton();
    delete_Ser_btn->setIcon(QIcon(":/new/prefix1/Resources/delete.png"));
    delete_Ser_btn->setToolTip("Delete this room");
    connect(delete_Ser_btn, &QPushButton::clicked, this, [this, row]() {
        ondelete_Ser_btnClicked(row);
    });

    QHBoxLayout* layout = new QHBoxLayout(buttonWidget);
    layout->addWidget(edit_Ser_btn);
    layout->addWidget(delete_Ser_btn);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    edit_Ser_btn->setFixedSize(20, 20);
    delete_Ser_btn->setFixedSize(20, 20);

    buttonWidget->setLayout(layout);

    ui->SerTable->setCellWidget(row, 4, buttonWidget);
}

void Admin::onedit_tenant_btnClicked(int row){
    QString tenantID = ui->TenantTable->item(row, 0)->text();
    QString name = ui->TenantTable->item(row, 1)->text();
    QString phone = ui->TenantTable->item(row, 2)->text();
    int age = ui->TenantTable->item(row, 3)->text().toInt();
    QString cccd = ui->TenantTable->item(row, 4)->text();
    Edittenant tenantedit(tenantID, name, phone, age, cccd, this);
    tenantedit.exec();
    ui->TenantTable->clearContents();
    ui->TenantTable->setRowCount(0);
    Tenant::showAllTenants(this);
    ui->totaltenant->setText(QString::number(Tenant::total));
}

void Admin::onedit_Ser_btnClicked(int row){
    QString ID = ui->SerTable->item(row, 0)->text();
    QString name = ui->SerTable->item(row, 1)->text();
    int price = ui->SerTable->item(row, 2)->text().toInt();
    QString des = ui->SerTable->item(row, 3)->text();
    Editservice edit(ID, name, price, des, this);
    edit.exec();
    ui->SerTable->clearContents();
    ui->SerTable->setRowCount(0);
    Service::showAllServices(this);
}

void Admin::onEditButtonClicked(int row) {
    QString roomID = ui->table1->item(row, 0)->text();
    Editroom roomedit(roomID, this);
    roomedit.exec();
    ui->table1->clearContents();
    ui->table1->setRowCount(0);
    Room::showAllRooms(this);
    ui->totalroom->setText(QString::number(Room::total));
}

void Admin::onDeleteButtonClicked(int row) {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete", "Are you sure you want to delete this?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
    QString roomID = ui->table1->item(row, 0)->text();
    Room::deleteRoom(roomID);
    ui->table1->clearContents();
    ui->table1->setRowCount(0);
    Room::showAllRooms(this);
    ui->totalroom->setText(QString::number(Room::total));
    }
}

void Admin::ondelete_Ser_btnClicked(int row){
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete", "Are you sure you want to delete this?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QString ID = ui->SerTable->item(row, 0)->text();
        Service::deleteService(ID);
        ui->SerTable->clearContents();
        ui->SerTable->setRowCount(0);
        Service::showAllServices(this);
        ui->totalservice->setText(QString::number(Service::total));
    }
}

void Admin::on_addroom_clicked()
{
    Addroom roomDialog(this);
    roomDialog.exec();
    ui->table1->clearContents();
    ui->table1->setRowCount(0);
    Room::showAllRooms(this);
    ui->totalroom->setText(QString::number(Room::total));
}

void Admin::on_searchroom_clicked()
{
    QString search = ui->LineEditSearchRoom->text();
    QString check = ui->CBSR->currentText();
    if (search.isEmpty()) {
        return;
    }
    if (check == "Room ID"){
        ui->table1->clearContents();
        ui->table1->setRowCount(0);
        Room::searchByID(search, this);
    }
    if (check == "Room Type"){
        ui->table1->clearContents();
        ui->table1->setRowCount(0);
        Room::searchByRoomType(search, this);
    }
}

void Admin::on_searchSer_clicked()
{
    QString search = ui->LineEditSearchSer->text();
    QString check = ui->CBSS->currentText();
    if (search.isEmpty()) {
        return;
    }
    if (check == "Service ID"){
        ui->SerTable->clearContents();
        ui->SerTable->setRowCount(0);
        Service::searchByID(search, this);
    }
    if (check == "Service Name"){
        ui->SerTable->clearContents();
        ui->SerTable->setRowCount(0);
        Service::searchByName(search, this);
    }
}

void Admin::on_searchtenant_clicked()
{
    QString search = ui->LineEditSearchTenant->text();
    QString check = ui->CBST->currentText();
    if (search.isEmpty()) {
        return;
    }
    if (check == "Tenant ID"){
        ui->TenantTable->clearContents();
        ui->TenantTable->setRowCount(0);
        Tenant::searchByID(search, this);
    }
    if (check == "Tên"){
        ui->TenantTable->clearContents();
        ui->TenantTable->setRowCount(0);
        Tenant::searchByName(search, this);
    }
}

void Admin::on_CBSR_currentIndexChanged(int index)
{
    if (index == 2 || index == 3 || index ==4) {
        ui->LineEditSearchRoom->setEnabled(false);
        ui->LineEditSearchRoom->setStyleSheet("QLineEdit { background-color: #d3d3d3; padding-left:20px; border: 1px solid gray; border-radius: 10px; }");
    } else {
        ui->LineEditSearchRoom->setEnabled(true);
        ui->LineEditSearchRoom->setStyleSheet("QLineEdit {padding-left:20px; border: 1px solid gray; border-radius: 10px;}");
    }
    QString check = ui->CBSR->currentText();
    if (check == "Phòng đang trống"){

        ui->table1->clearContents();
        ui->table1->setRowCount(0);
        ui->LineEditSearchRoom->clear();
        Room::searchByStatus(0, this);
    }
    if (check == "Phòng đã có người thuê"){

        ui->table1->clearContents();
        ui->table1->setRowCount(0);
        ui->LineEditSearchRoom->clear();
        Room::searchByStatus(1, this);
    }
    if (check == "Phòng đang bảo trì"){

        ui->table1->clearContents();
        ui->table1->setRowCount(0);
        ui->LineEditSearchRoom->clear();
        Room::searchByStatus(2, this);
    }
}


void Admin::on_pushButton_5_clicked()
{
    // Admin::moverMenu();
}


void Admin::on_DBbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Admin::on_DB1btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}




void Admin::on_Refbtn_clicked()
{
    ui->table1->clearContents();
    ui->table1->setRowCount(0);
    // managerooms();
    Room::showAllRooms(this);
    ui->LineEditSearchRoom->clear();
    ui->CBSR->setCurrentIndex(0);
}


void Admin::on_Tenantbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Admin::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Admin::on_RefTenantbtn_clicked()
{
    ui->TenantTable->clearContents();
    ui->TenantTable->setRowCount(0);
    Tenant::showAllTenants(this);
    ui->LineEditSearchTenant->clear();
    ui->CBST->setCurrentIndex(0);
}

void Admin::on_RefbtnSer_clicked()
{
    ui->SerTable->clearContents();
    ui->SerTable->setRowCount(0);
    Service::showAllServices(this);
    ui->LineEditSearchSer->clear();
    ui->CBSR->setCurrentIndex(0);
}


void Admin::on_Serbtn1_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Admin::on_Serbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Admin::on_addSer_clicked()
{
    AddService add(this);
    add.exec();
    ui->SerTable->clearContents();
    ui->SerTable->setRowCount(0);
    Service::showAllServices(this);
    ui->totalservice->setText(QString::number(Service::total));
}


