#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "LinkedList.h"
#include <string>

class Account
{
private:
    string account_ID;
    string username;
    string password;
    string tenant_ID;
    int roll; // 0: Khach, 1: Admin
public:
    static string currentTenantID;
    static int total;          // Tổng số phòng
    static int currentNumber;  // Số lượng phòng hiện tại
    static int currentRoll;
    static string AdminCode;
    static LinkedList<Account> accountList;

    // Constructor, Destructor
    Account();
    Account(const string& username, const string& password, const string& id, int roll = 0);
    ~Account();

    // Ham Get
    string getusername();
    string getpassword();
    string gettenantID();
    int getRoll();

    // Ham Set
    void setusername(string u);
    void setpassword(string p);
    static void setAdminCode();

    void fromString(const string& line);
    string toString() const;
    static string generateID(int number);

    static void load(const string& filename);
    static void updateFile(const string& filename);
    static bool signin(const string& u, const string& p);
    static bool signup();

    // Basic Function
    void addAccount();
    void deleteAccount();
    void editAccount();
    void resetPassword();

    // Search function
    static LinkedList<Account>::Node* searchByUsername(string u, int check);
    static LinkedList<Account>::Node* searchByPassword(string p);

    static void showAllAccount();

    static bool forgotPassword();
    static LinkedList<Account>::Node* verifyTenantInfo(const string& phone, const string& cccd);
};

#endif // ACCOUNT_H
