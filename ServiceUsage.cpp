#include "ServiceUsage.h"
#include "Account.h"

int ServiceUsage::total = 0;
int ServiceUsage::currentNumber = 0;
LinkedList<ServiceUsage> ServiceUsage::usageList;

// Constructor
ServiceUsage::ServiceUsage() {}
ServiceUsage::ServiceUsage(const string& roomId, const string& servId, const string& tenantId, bool status)
    : room_ID(roomId), service_ID(servId), tenantID(tenantId), status(status) {
    usage_ID = generateID(++currentNumber);
}
ServiceUsage::~ServiceUsage() {}

// ID Generate
string ServiceUsage::generateID(int number) {
    stringstream ss;
    ss << "SU." << setw(3) << setfill('0') << number;
    return ss.str();
}

void ServiceUsage::load(const string& filename) { usageList.load(filename); }
void ServiceUsage::updateFile(const string& filename) { usageList.updateFile(filename); }

void ServiceUsage::fromString(const string& line) {
    string usageDatestr;
    stringstream ss(line);
    getline(ss, usage_ID, ',');
    getline(ss, room_ID, ',');
    getline(ss, service_ID, ',');
    getline(ss, tenantID, ',');
    ss >> status;
    total++;
}


string ServiceUsage::toString() const {
    stringstream ss;
    ss << usage_ID << ',' << room_ID << ',' << service_ID << ','
       << tenantID << ',' << status;
    return ss.str();
}

void ServiceUsage::showAllServiceUsages(Admin* adminWindow){
    usageList.show(adminWindow);
}

void ServiceUsage::display(Admin* adminWindow) const {
    adminWindow->displayServiceUsages(*this);
}

// void ServiceUsage::addServiceUsage(const string& room_ID, const string& serID, int quantity, const QDate& qdate){
//     DATE usageDate;
//     usageDate.fromQDate(qdate);
//     ServiceUsage newUsage(room_ID, serID, Account::currentTenantID ,quantity, usageDate);
//     usageList.add(newUsage);
//     total++;
// }
