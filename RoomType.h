#ifndef ROOMTYPE_H
#define ROOMTYPE_H
#include <QString>
#include "LinkedList.h"
#include "admin.h"

class Admin;
class RoomType
{
protected:
    QString type_ID;
    QString description;
    double price;
public:
    friend class Admin;
    QString getID() const;
    double getPrice() const;
    static LinkedList<RoomType> roomTypeList;
    static int total;
    static int currentNumber;
    RoomType();
    RoomType(const QString& desc, double price);
    RoomType(const QString id, const QString& desc, double price);
    // static void searchByID();
    static QString generateID(int number);
    static void load(const QString& filename);
    void fromString(const QString& line);
};

#endif // ROOMTYPE_H
