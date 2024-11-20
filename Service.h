#ifndef SERVICE_H
#define SERVICE_H

#include <QString>
#include <sstream>
#include "LinkedList.h"
#include "admin.h"

class Admin;

class Service
{
    QString service_ID;
    QString name;
    int unit_price;
    QString description;

public:
    friend class Admin;
    static int total;
    static int currentNumber;
    static LinkedList<Service> serviceList;

    Service();
    Service(const QString& n, int price, const QString& desc);
    ~Service();

    void fromString(const QString& line);
    QString getID() const;
    QString getName() const;

    static QString generateID(int number);
    QString toString() const;
    void display(Admin* adminWindow) const;

    static void load(const QString& filename);
    static void updateFile(const QString& filename);
    static void addService(const QString& name, int price, const QString& des);
    static void updateService(const QString& id, const QString& name, int price, const QString& des);
    static void deleteService(const QString& id);
    static void showAllServices(Admin* adminWindow);
    static void searchByID(const QString& id, Admin* adminWindow);
    static void searchByName(const QString& name, Admin* adminWindow);
};

#endif // SERVICE_H
