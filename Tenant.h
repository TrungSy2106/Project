#ifndef TENANT_H
#define TENANT_H

#include <QString>
#include <sstream>
#include "LinkedList.h"
#include "admin.h"

class Tenant
{
    QString tenant_ID;
    QString name;
    QString phone;
    int age;
    QString cccd;
public:
    friend class Admin;
    static int total;
    static int currentNumber;
    static LinkedList<Tenant> tenantList;
    Tenant();
    Tenant(const QString& name, const QString& phone, const QString& cccd, int age);
    ~Tenant();
    static QString generateID(int number);
    QString getID() const;
    QString getName() const;

    void fromString(const QString& line);
    QString toString() const;

    void setName(const QString& name);
    void setPhone(const QString& phone);
    void setAge(int age);
    void setCCCD(const QString& cccd);

    void display(Admin* adminWindow) const;

    static void showAllTenants(Admin* adminWindow);
    static void searchByID(const QString& id, Admin* adminWindow);
    static void searchByName(const QString& name, Admin* adminWindow);
    static void load(const QString& filename);
    static void updateFile(const QString& filename);
    static void updateTenant(const QString& tenantId, const QString& name, const QString& phone, const QString& cccd, int age);
};

#endif // TENANT_H
