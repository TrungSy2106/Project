#include "Tenant.h"
#include "admin.h"

int Tenant::total = 0;
int Tenant::currentNumber = 0;
LinkedList<Tenant> Tenant::tenantList;

Tenant::Tenant() {}
Tenant::Tenant(const QString& name, const QString& phone, const QString& cccd, int age)
    : name(name), phone(phone), age(age), cccd(cccd) {
    currentNumber++;
    total++;
    tenant_ID = generateID(currentNumber);
}
Tenant::~Tenant() {}

QString Tenant::getID() const { return tenant_ID; }
QString Tenant::getName() const { return name; }

void Tenant::setName(const QString& name) { this->name = name; }
void Tenant::setPhone(const QString& phone) { this->phone = phone; }
void Tenant::setAge(int age) { this->age = age; }
void Tenant::setCCCD(const QString& cccd) { this->cccd = cccd; }

QString Tenant::generateID(int number) {
    stringstream ss;
    ss << "T." << setw(3) << setfill('0') << number;
    return QString::fromStdString(ss.str());
}

void Tenant::updateFile(const QString& filename) { tenantList.updateFile(filename); }

void Tenant::showAllTenants(Admin* adminWindow) {
    tenantList.show(adminWindow);
}

void Tenant::load(const QString& filename) { tenantList.load(filename); }

void Tenant::display(Admin* adminWindow) const {
    adminWindow->displayTenant(*this);  // Gọi hàm displayRoom của Admin với Room hiện tại
}

// void Tenant::fromString(const QString& line) {
//     QStringList fields = line.split(',');

//     tenant_ID = fields[0].trimmed();
//     cccd = fields[1].trimmed();
//     name = fields[2].trimmed();
//     phone = fields[3].trimmed();
//     age = fields[4].trimmed().toInt();

//     total++;
// }

void Tenant::fromString(const QString& line) {
    stringstream ss(line.toStdString());
    string tid, t_cccd, t_name, sdt;
    getline(ss, tid, ',');
    tenant_ID = QString::fromStdString(tid);
    getline(ss, t_cccd, ',');
    cccd = QString::fromStdString(t_cccd);
    getline(ss, t_name, ',');
    name = QString::fromStdString(t_name);
    getline(ss, sdt, ',');
    phone = QString::fromStdString(sdt);
    ss >> age;
    total++;
}

QString Tenant::toString() const {
    return tenant_ID + "," + cccd + "," + name + "," + phone + "," + QString::number(age);
}

void Tenant::updateTenant(const QString& tenantId, const QString& name, const QString& phone, const QString& cccd, int age) {
    Tenant* tenant = tenantList.searchID(tenantId);
    tenant->setName(name);
    tenant->setPhone(phone);
    tenant->setCCCD(cccd);
    tenant->setAge(age);
    Tenant::updateFile("Tenant.txt");
}

void Tenant::searchByID(const QString& id, Admin* adminWindow) {
    Tenant* tenant = tenantList.searchID(id);
    if (tenant)
        adminWindow->displayTenant(*tenant);
    else return;
}

// void Tenant::searchByName(const QString& name, Admin* adminWindow){
//     tenantList.searchStatus(name, adminWindow);
// }

void Tenant::searchByName(const QString& name, Admin* adminWindow) {
    bool found = false;
    LinkedList<Tenant>::Node* current = tenantList.getHead();
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
