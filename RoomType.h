#ifndef ROOMTYPE_H
#define ROOMTYPE_H
#include <string>
#include "LinkedList.h"
#include "admin.h"

class Admin;
class RoomType
{
protected:
    string type_ID;
    string description;
    double price;
public:
    friend class Admin;
    string getID() const;
    double getPrice() const;
    string getDescription() const;

    static LinkedList<RoomType> roomTypeList;
    static int total;
    static int currentNumber;
    RoomType();
    RoomType(const string& desc, double price);
    RoomType(const string id, const string& desc, double price);
    // static void searchByID();
    static string generateID(int number);
    static void load(const string& filename);
    void fromString(const string& line);
};

#endif // ROOMTYPE_H
