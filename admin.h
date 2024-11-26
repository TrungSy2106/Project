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
class ServiceUsage;
class Reservation;
class Payment;
class Contract;

class Admin : public QMainWindow
{
    Q_OBJECT
public:
    void managerooms();
    void managetenants();
    void manageservices();
    void manageserviceusages();
    void managereservations();
    void managepayments();
    void managecontracts();
    explicit Admin(QWidget *parent = nullptr);
    void displayRooms(const Room& room);
    void displayTenants(const Tenant& t);
    void displayServices(const Service& s);
    void displayServiceUsages(const ServiceUsage& su);
    void displayReservations(const Reservation& re);
    void displayPayments(const Payment& p);
    void displayContracts(const Contract& c);
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
    void searchroom();
    void on_CBSR_currentIndexChanged(int index);
    void moverMenu();
    void on_pushButton_5_clicked();
    void on_DBbtn_clicked();
    void on_DB1btn_clicked();
    void on_Refbtn_clicked();
    void on_Tenantbtn_clicked();
    void searchtenant();
    void onacceptbtnClicked(int row);
    void onrejectbtnClicked(int row);
    void on_RefTenantbtn_clicked();
    void on_pushButton_17_clicked();
    void on_Serbtn1_clicked();
    void on_Serbtn_clicked();
    void on_addSer_clicked();
    void searchSer();
    void on_RefbtnSer_clicked();
    void on_SerUsage1btn_clicked();
    void on_SerUsagebtn_clicked();
    void on_ReservationUsagebtn_clicked();
    void on_Reservation1btn_clicked();
    void on_searchRer_clicked();
    void on_signoutbtn1_clicked();
    void on_signoutbtn_clicked();


    void on_Paymentbtn_clicked();

    void on_Paymentbtn1_clicked();

    void on_Contractbtn_clicked();

    void on_Contractbtn1_clicked();

private:
    Ui::Admin *ui;
    QPropertyAnimation *animation;
};

#endif // ADMIN_H
