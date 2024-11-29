#include "Createpayment.h"
#include "ui_Createpayment.h"
#include "Room.h"

Createpayment::Createpayment(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Createpayment)
{
    ui->setupUi(this);
    Room::searchByStatus(1, this);
}

Createpayment::~Createpayment()
{
    delete ui;
}

void Createpayment::displayRooms(const Room& room) {
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    QTableWidgetItem* item0 = new QTableWidgetItem(QString::fromStdString(room.getID()));
    item0->setFlags(item0->flags() & ~Qt::ItemIsEditable);
    ui->tableWidget->setItem(row, 0, item0);

    QTableWidgetItem* item1 = new QTableWidgetItem(QString::fromStdString(room.getTenantID()));
    item1->setFlags(item1->flags() & ~Qt::ItemIsEditable);
    ui->tableWidget->setItem(row, 1, item1);
}
