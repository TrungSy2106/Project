#ifndef CREATEPAYMENT_H
#define CREATEPAYMENT_H

#include <QDialog>

class Room;

namespace Ui {
class Createpayment;
}

class Createpayment : public QDialog
{
    Q_OBJECT

public:
    void displayRooms(const Room& room);
    explicit Createpayment(QWidget *parent = nullptr);
    ~Createpayment();

private:
    Ui::Createpayment *ui;
};

#endif // CREATEPAYMENT_H
