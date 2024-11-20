#include "Service.h"
#include "admin.h"


int Service::total = 0;
int Service::currentNumber = 0;
LinkedList<Service> Service::serviceList;

Service::Service() {}
Service::Service(const QString& n, int price, const QString& desc)
    : name(n), unit_price(price), description(desc) {
    currentNumber++;
    service_ID = generateID(currentNumber);
}
Service::~Service() {}

QString Service::getID() const { return service_ID; }
QString Service::getName() const { return name; }

QString Service::generateID(int number) {
    stringstream ss;
    ss << "S." << setw(3) << setfill('0') << number;
    return QString::fromStdString(ss.str());
}

void Service::fromString(const QString& line) {
    stringstream ss(line.toStdString());
    string s_id, s_name, des;
    getline(ss, s_id, ',');
    service_ID = QString::fromStdString(s_id);
    getline(ss, s_name, ',');
    name = QString::fromStdString(s_name);
    ss >> unit_price;
    ss.ignore(1);
    getline(ss, des);
    description = QString::fromStdString(des);
    total++;
}

QString Service::toString() const {
    return service_ID + "," + name + "," + QString::number(unit_price) + "," + description;
}

void Service::load(const QString& filename) { serviceList.load(filename); }
void Service::updateFile(const QString& filename) { serviceList.updateFile(filename); }

void Service::display(Admin* adminWindow) const {
    adminWindow->displayService(*this);
}

void Service::showAllServices(Admin* adminWindow) {
    serviceList.show(adminWindow);
}

void Service::addService(const QString& name, int price, const QString& des) {
    Service service(name, price, des);
    serviceList.add(service);
    total++;
    Service::updateFile("Service.txt");
}

void Service::updateService(const QString& id, const QString& name, int price, const QString& des) {
    Service* service = serviceList.searchID(id);
    if (service) {
        service->name = name;
        service->unit_price = price;
        service->description = des;
        Service::updateFile("Service.txt");
    }
}

void Service::deleteService(const QString& id) {
    serviceList.deleteNode(id);
    total--;
    Service::updateFile("Service.txt");
}

void Service::searchByID(const QString& id, Admin* adminWindow) {
    Service* service = serviceList.searchID(id);
    if (service)
        adminWindow->displayService(*service);
    else return;
}

void Service::searchByName(const QString& name, Admin* adminWindow) {
    bool found = false;
    LinkedList<Service>::Node* current = serviceList.getHead();
    while (current != nullptr) {
        if (current->data.getName() == name) {
            current->data.display(adminWindow);
            found = true;
        }
        current = current->next;
    }
    if (!found) {
        return;
    }
}
