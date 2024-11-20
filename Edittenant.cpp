#include "Edittenant.h"
#include "ui_Edittenant.h"
#include "Tenant.h"

Edittenant::Edittenant(const QString& tenantID, const QString& name, const QString& phone, int age, const QString& cccd,  QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Edittenant)
    , tenant_ID(tenantID)
    , name(name)
    , phone(phone)
    , age(age)
    , cccd(cccd)
{
    ui->setupUi(this);
    ui->newname->setPlaceholderText(name);
    ui->newsdt->setPlaceholderText(phone);
    ui->newage->setPlaceholderText(QString::number(age));
    ui->newcccd->setPlaceholderText(cccd);
}

Edittenant::~Edittenant()
{
    delete ui;
}


void Edittenant::on_Edittenantbtn_clicked()
{
    QString newname = ui->newname->text();
    QString newsdt = ui->newsdt->text();
    QString newcccd = ui->newcccd->text();
    int newage = ui->newage->text().toInt();
    if (ui->newname->text().isEmpty()){
        newname = name;
    }
    if (ui->newsdt->text().isEmpty()){
        newsdt = phone;
    }
    if (ui->newcccd->text().isEmpty()){
        newcccd = cccd;
    }
    if (ui->newage->text().isEmpty()){
        newage = age;
    }
    Tenant::updateTenant(tenant_ID, newname, newsdt, newcccd, newage);
}

