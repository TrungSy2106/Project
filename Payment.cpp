#include "Payment.h"

int Payment::total = 0;
int Payment::currentNumber = 0;
LinkedList<Payment> Payment::paymentList;

Payment::Payment() : depositAmount(0) {}
Payment::Payment(const string& roomID, const string& tenantID, double rentAmount, double serviceAmount,
                 double totalAmount, int payMonth, int payYear, bool status) :  roomID(roomID), tenantID(tenantID), rentAmount(rentAmount), serviceAmount(serviceAmount),
    totalAmount(totalAmount) ,payMonth(payMonth), payYear(payYear), status(status), depositAmount(0) {
    paymentID = generateID(++currentNumber);
    totalAmount = rentAmount + serviceAmount;
}
Payment::~Payment() {}

string Payment::generateID(int number) {
    stringstream ss;
    ss << "P." << setw(3) << setfill('0') << number;
    return ss.str();
}

void Payment::load(const string& filename) { paymentList.load(filename); }
void Payment::updateFile(const string& filename) { paymentList.updateFile(filename); }

string Payment::getID() const { return paymentID; }
string Payment::getRoomID () const { return roomID; }
string Payment::getTenantID () const { return tenantID; }
int Payment::getPayMonth() const { return payMonth; }
int Payment::getPayYear() const { return payYear; }
DATE Payment::getpayDate() const {return payDate; }
bool Payment::getStatus() const {return status;}
double Payment::getdepositAmount() const {return depositAmount;}
double Payment::getRentAmount() const {return rentAmount; }
double Payment::getServiceAmount() const {return serviceAmount; }
double Payment::getTotalAmount() const {return totalAmount;}

void Payment::fromString(const string& line) {
    string payDatestr;
    stringstream ss(line);
    getline(ss, paymentID, ',');
    getline(ss, roomID, ',');
    getline(ss, tenantID, ',');
    ss >> rentAmount;
    ss.ignore(1);
    ss >> serviceAmount;
    ss.ignore(1);
    ss >> totalAmount;
    ss.ignore(1);
    ss >> payMonth;
    ss.ignore(1);
    ss >> payYear;
    ss.ignore(1);
    getline(ss, payDatestr, ',');
    payDate.fromString(payDatestr);
    ss >> status;
    ss.ignore(1);
    ss >> depositAmount;
    total++;
}

string Payment::toString() const {
    stringstream ss;
    ss << paymentID << "," << roomID << "," << tenantID << ","
       << int(rentAmount) << "," << int(serviceAmount) << "," << int(totalAmount) << "," << payMonth << "," << payYear << ","
       << payDate.toString() << "," << status << "," << depositAmount;
    return ss.str();
}


double Payment::calculateTotalBilled(int month, int year) {
    double total = 0;
    for (LinkedList<Payment>::Node* current = paymentList.begin();
         current != nullptr; current = current->next) {
        Payment& payment = current->data;
        if (payment.payMonth == month && payment.payYear == year) {
            total += payment.totalAmount;
        }
    }
    return total;
}

double Payment::calculateTotalCollected(int month, int year) {
    double total = 0;
    for (LinkedList<Payment>::Node* current = paymentList.begin();
         current != nullptr; current = current->next) {
        Payment& payment = current->data;
        if (payment.payMonth == month && payment.payYear == year && payment.status) {
            total += payment.totalAmount;
        }
    }
    return total;
}

void Payment::showAllPayments(Admin* adminWindow) {
    paymentList.show(adminWindow);
}

void Payment::display(Admin* adminWindow) const {
    adminWindow->displayPayments(*this);
}

void Payment::searchByMonth(int month, int year, Admin* adminWindow) {
    bool found = false;
    for (LinkedList<Payment>::Node* current = paymentList.begin(); current != nullptr; current = current->next) {
        Payment& payment = current->data;
        if (payment.payMonth == month && payment.payYear == year) {
            payment.display(adminWindow);
            found = true;
        }
    }
    if (!found) { return; }
}
