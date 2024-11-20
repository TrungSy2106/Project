#ifndef EDITSERVICE_H
#define EDITSERVICE_H

#include <QDialog>

namespace Ui {
class Editservice;
}

class Editservice : public QDialog
{
    Q_OBJECT

public:
    explicit Editservice(const QString& service_ID, const QString& name, int price, const QString& des, QWidget *parent = nullptr);
    ~Editservice();

private slots:
    void on_UpdateSerbtn_clicked();

private:
    Ui::Editservice *ui;
    QString service_ID;
    QString name;
    int unit_price;
    QString description;
};

#endif // EDITSERVICE_H
