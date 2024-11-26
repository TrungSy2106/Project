#include "RoomType.h"
#include <QTextStream>
#include <string>

int RoomType::total = 0;
int RoomType::currentNumber = 0;
LinkedList<RoomType> RoomType::roomTypeList;
RoomType::RoomType() {}
RoomType::RoomType(const string& desc, double price)
    : description(desc), price(price){
    type_ID = generateID(++currentNumber);
}

double RoomType::getPrice() const { return price; }
string RoomType::getID() const { return type_ID; }
string RoomType::getDescription() const { return description; }

string RoomType::generateID(int number) {
    stringstream ss;
    ss << "RT." << setw(2) << setfill('0') << number;
    return ss.str();
}

void RoomType::load(const string& filename) { roomTypeList.load(filename); }

// void RoomType::fromString(const string& line) {
//     // Sử dụng stringList để tách các phần của chuỗi
//     stringList parts = line.split(',');

//     if (parts.size() < 3) {
//         qWarning() << "Line format is invalid:" << line;
//         return;
//     }

//     // Lưu trữ các giá trị vào các biến thành viên
//     type_ID = parts[0].trimmed();       // Tách ID loại phòng
//     description = parts[1].trimmed();    // Tách mô tả
//     price = parts[2].trimmed().toDouble();  // Chuyển đổi sang số thực (double)

//     total++;
// }

void RoomType::fromString(const string& line) {
    stringstream ss(line);
    getline(ss, type_ID, ',');
    getline(ss, description, ',');
    ss >> price;
    total++;
}
