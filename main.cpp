#include "admin.h"
// #include "Test.h"
// #include "Menu.h"
#include "RoomType.h"
#include "Room.h"
#include "Tenant.h"
#include "Service.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    RoomType::load("RoomType.txt");
    Room::load();
    // Room::showAllRooms();
    // Test::read();
    // Account::load("E:\\GUI\\Data\\Account.txt");
    // RoomType::load("E:\\GUI\\Data\\RoomType.txt");
    // Room::load();
    Tenant::load("Tenant.txt");
    Service::load("Service.txt");
    // ServiceUsage::load("E:\\GUI\\Data\\ServiceUsage.txt");
    // Reservation::load("E:\\GUI\\Data\\Reservation.txt");
    // Contract::load("E:\\GUI\\Data\\Contract.txt");
    // displayMenu(roomList, tenantList, serviceList, serviceusageList, reservationList, paymentList);
    // Room::showAllRooms(roomList);

    QApplication a(argc, argv);
    Admin w;
    w.show();
    return a.exec();
    // return 0;
}
