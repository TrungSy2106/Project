#ifndef EDITROOM_H
#define EDITROOM_H

#include <QDialog>

namespace Ui {
class Editroom;
}

class Editroom : public QDialog
{
    Q_OBJECT

public:
    // void setRI(const QString &roomID);
    explicit Editroom(const QString& roomID, QWidget *parent = nullptr);
    ~Editroom();

private slots:
    void on_Updateroombtn_clicked();

private:
    Ui::Editroom *ui;
    QString room_ID;
};

#endif // EDITROOM_H
