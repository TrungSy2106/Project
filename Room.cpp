#include "Room.h"
#include <QFile>
#include <QDebug>
#include "LinkedList.h"
#include <QStringList>
#include <iostream>
#include <ostream>
#include <admin.h>

LinkedList<Room> Room::roomList;
int Room::total = 0;
int Room::currentNumber = 0;
Room::Room() {}
Room::Room(const RoomType& type, int s, const QString& tenantId)
    : roomType(type), status(s), tenant_ID(tenantId) {
    room_ID = generateID(++currentNumber);
}
Room::~Room() {}

// QString Room::generateID(int number) {
//     QString str;
//     QTextStream ss(&str);
//     ss << "R." << QString("%1").arg(number, 3, 10, QChar('0'));
//     return str;
// }

QString Room::generateID(int number) {
    stringstream ss;
    ss << "R." << setw(3) << setfill('0') << number;
    return QString::fromStdString((ss.str()));
}

void Room::updateFile(const QString& filename) { roomList.updateFile(filename); }
void Room::load(){
    roomList.load("Room.txt");
}
QString Room::getID() const { return room_ID; }

void Room::setStatus(int status) { this->status = status; }
void Room::setRT(const RoomType& type){ this->roomType = type;}
// void Room::fromString(const QString& line) {
//     QStringList fields = line.split(',');
//     room_ID = fields[0];
//     QString type_id = fields[1];
//     status = fields[2].trimmed().toInt();
//     tenant_ID = fields[3].trimmed();
//     roomType = RoomType::roomTypeList.searchID(type_id)? *(RoomType::roomTypeList.searchID(type_id)): RoomType();
//     total++;
// }

void Room::fromString(const QString& line) {
    stringstream ss(line.toStdString());
    string type_id, rid, tid;
    getline(ss, rid, ',');
    room_ID = QString::fromStdString(rid);
    getline(ss, type_id, ',');
    ss >> status;
    ss.ignore(1);
    getline(ss, tid);
    tenant_ID = QString::fromStdString(tid);
    roomType = *RoomType::roomTypeList.searchID(QString::fromStdString(type_id));
    total++;
}

QString Room::toString() const {
    return room_ID + "," + roomType.getID() + "," + QString::number(status) + "," + (tenant_ID.isEmpty() ? "N/A" : tenant_ID);
}

void Room::addRoom(const QString& rt_id) {
    RoomType* matchedRoomType;
    matchedRoomType = RoomType::roomTypeList.searchID(rt_id);
    int status = 0;
    QString tenant_id = "N/A";
    Room newRoom(*matchedRoomType, status, tenant_id);
    roomList.add(newRoom);
    Room::updateFile("Room.txt");
    total++;
}
void Room::showAllRooms(Admin* adminWindow) {
    roomList.show(adminWindow);
}

void Room::display(Admin* adminWindow) const {
    adminWindow->displayRoom(*this);  // Gọi hàm displayRoom của Admin với Room hiện tại
}

void Room::updateRoom(const QString& rid, int sta, const QString& rt){
    Room* room = roomList.searchID(rid);
    room->setStatus(sta);
    RoomType* find = roomTypeList.searchID(rt);
    room->setRT(*find);
    Room::updateFile("Room.txt");
}

void Room::deleteRoom(const QString& rid) {
    roomList.deleteNode(rid);
    total--;
    Room::updateFile("Room.txt");
}

void Room::searchByID(const QString& id, Admin* adminWindow) {
    Room* room = roomList.searchID(id);
    if (room)
    adminWindow->displayRoom(*room);
    else return;
}

void Room::searchByStatus(int st, Admin* adminWindow){
    roomList.searchStatus(st, adminWindow);
}

void Room::searchByRoomType(const QString& RT, Admin* adminWindow){
    roomList.searchRoomType(RT, adminWindow);
}

void Room::Ascending(){
    roomList.sortByID(true);
}

void Room::Descending(){
    roomList.sortByID(false);
}
