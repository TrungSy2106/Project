#ifndef ROOM_H
#define ROOM_H
#include "LinkedList.h"
#include <QFile>
#include <QString>
#include <sstream>
#include "RoomType.h"
#include "admin.h"

class Admin;

class Room: public RoomType
{
protected:
    RoomType roomType;
    QString room_ID;
    int status;
    QString tenant_ID;
public:
    friend class Admin;
    Room(const RoomType& type, int s, const QString& tenantId = "");
    Room();
    ~Room();
    void setStatus(int status);
    void setRT(const RoomType& type);
    QString getRoomTypeID() const { return roomType.getID(); }
    int getStatus() const { return status; }
    QString getTenantID() const { return tenant_ID; }
    double getRoomPrice() const { return roomType.getPrice(); }
    void display(Admin* adminWindow) const;
    QString getID() const;
    void fromString(const QString& line);
    QString toString() const;
    static int total;
    static int currentNumber;
    static LinkedList<Room> roomList;
    static QString generateID(int number);

    static void updateRoom(const QString& rid, int sta, const QString& rt);
    static void updateFile(const QString& filename);
    static void searchByID(const QString& id, Admin* adminWindow);
    static void searchByStatus(int st, Admin* adminWindow);
    static void searchByRoomType(const QString& RT, Admin* adminWindow);
    static void load();
    static void deleteRoom(const QString& rid);
    static void addRoom(const QString& rt_id);
    static void showAllRooms(Admin* adminWindow);
    static void Ascending();
    static void Descending();
    friend ostream& operator<<(ostream& os, const Room& r);
};

#endif // ROOM_H
