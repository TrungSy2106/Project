#include "Editroom.h"
#include "ui_Editroom.h"
#include "Room.h"

Editroom::Editroom(const QString& roomID, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Editroom)
    , room_ID(roomID)
{
    ui->setupUi(this);
}

Editroom::~Editroom()
{
    delete ui;
}

void Editroom::on_Updateroombtn_clicked()
{
    int newst;
    QString st = ui->comboBox->currentText();
    if (st == "Trống") newst = 0;
    else newst = 2;
    QString newrt = ui->newRT->text();
    QString rt = this->room_ID;
    Room::updateRoom(rt, newst, newrt);
}

