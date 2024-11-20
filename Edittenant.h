#ifndef EDITTENANT_H
#define EDITTENANT_H

#include <QDialog>

namespace Ui {
class Edittenant;
}

class Edittenant : public QDialog
{
    Q_OBJECT

public:
    explicit Edittenant(const QString& tenantID, const QString& name, const QString& phone, int age, const QString& cccd, QWidget *parent = nullptr);
    ~Edittenant();

private slots:

    void on_Edittenantbtn_clicked();

private:
    Ui::Edittenant *ui;
    QString tenant_ID;
    QString name;
    QString phone;
    int age;
    QString cccd;
};

#endif // EDITTENANT_H
