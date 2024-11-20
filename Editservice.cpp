#include "Editservice.h"
#include "ui_Editservice.h"
#include "Service.h"
#include <QMessageBox>

Editservice::Editservice(const QString& service_ID, const QString& name, int price, const QString& des, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Editservice)
    , service_ID(service_ID)
    , name(name)
    , unit_price(price)
    , description(des)
{
    ui->setupUi(this);
    ui->name->setPlaceholderText(name);
    ui->price->setPlaceholderText(QString::number(price));
    ui->des->setPlaceholderText(des);
}

Editservice::~Editservice()
{
    delete ui;
}

void Editservice::on_UpdateSerbtn_clicked()
{
    bool c;
    QString newname = ui->name->text();
    int newprice = ui->price->text().toInt(&c);
    QString newdes = ui->des->text();
    if (ui->name->text().isEmpty()){
        newname = name;
    }
    if (ui->price->text().isEmpty()){
        newprice = unit_price;
    }
    if (ui->des->text().isEmpty()){
        newdes = description;
    }
    if (!ui->price->text().isEmpty()){
    if(!c){
        QMessageBox::warning(this, "Lỗi", "Giá dịch vụ không hợp lệ. Vui lòng nhập lại!");
        return;
    }
    }
    Service::updateService(service_ID, newname, newprice, newdes);
    this->close();
}

