#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QPropertyAnimation>

namespace Ui {
class Admin;
}
class Room;
class Tenant;
class Service;

class Admin : public QMainWindow
{
    Q_OBJECT
    friend class Room;
    friend class Tenant;
    // friend class Service;

public:
    void managerooms();
    void managetenants();
    void manageservice();
    explicit Admin(QWidget *parent = nullptr);
    void displayRoom(const Room& room);
    void displayTenant(const Tenant& t);
    void displayService(const Service& s);
    ~Admin();

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_15_clicked();
    void on_addroom_clicked();
    void onEditButtonClicked(int row);
    void onDeleteButtonClicked(int row);
    void ondelete_Ser_btnClicked(int row);
    void onedit_tenant_btnClicked(int row);
    void onedit_Ser_btnClicked(int row);
    void on_searchroom_clicked();
    void on_CBSR_currentIndexChanged(int index);
    void moverMenu();
    void on_pushButton_5_clicked();
    void on_DBbtn_clicked();
    void on_DB1btn_clicked();
    void on_Refbtn_clicked();
    void on_Tenantbtn_clicked();
    void on_searchtenant_clicked();

    void on_RefTenantbtn_clicked();

    void on_pushButton_17_clicked();

    void on_Serbtn1_clicked();

    void on_Serbtn_clicked();

    void on_addSer_clicked();

    void on_searchSer_clicked();

    void on_RefbtnSer_clicked();

private:
    Ui::Admin *ui;
    QPropertyAnimation *animation;
};

#endif // ADMIN_H
