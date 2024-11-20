#include "RoomType.h"
#include <QTextStream>
#include <QString>
#include <QStringList>

int RoomType::total = 0;
int RoomType::currentNumber = 0;
LinkedList<RoomType> RoomType::roomTypeList;
RoomType::RoomType() {}
RoomType::RoomType(const QString& desc, double price)
    : description(desc), price(price){
    type_ID = generateID(++currentNumber);
}

double RoomType::getPrice() const { return price; }
QString RoomType::getID() const { return type_ID; }

QString RoomType::generateID(int number) {
    QString str;
    QTextStream ss(&str);
    ss << "RT." << QString("%1").arg(number, 2, 10, QChar('0'));
    return str;
}

void RoomType::load(const QString& filename) { roomTypeList.load(filename); }

// void RoomType::fromString(const QString& line) {
//     // Sử dụng QStringList để tách các phần của chuỗi
//     QStringList parts = line.split(',');

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

void RoomType::fromString(const QString& line) {
    stringstream ss(line.toStdString());
    string t_id, des;
    getline(ss, t_id, ',');
    type_ID = QString::fromStdString(t_id);
    getline(ss, des, ',');
    description = QString::fromStdString(des);
    ss >> price;
    total++;
}
