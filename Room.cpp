#include "Room.h"

Room::Room(int maphong, int tinhtrang, string classify, int price)
    :maphong(maphong), tinhtrang(tinhtrang), classify(classify), price(price)
{
}

Room::Room(const Room &r)
{
    this->maphong = r.maphong;
    this->tinhtrang = r.tinhtrang;
    this->classify = r.classify;
    this->price = r.price;
}

Room::~Room()
{
}

void Room::Show()
{
    cout << "\t\t\t\t\t Ma phong: " << this->maphong << endl;
    cout << "\t\t\t\t\t Loai phong (VIP & NORMAL): " << this->classify << endl;
    cout << "\t\t\t\t\t Gia thue: " << this->price << "dong/Ngay" << endl;
    if(this->tinhtrang == 0)
        cout << "\t\t\t\t\t Tinh trang: TRONG" << endl;
    else 
        cout << "\t\t\t\t\t Tinh trang: DA THUE" << endl;
}

void Room::Show(ofstream& o)
{
    o << "\t\t\t\t\t Ma phong: " << this->maphong << endl;
    o << "\t\t\t\t\t Loai phong (VIP & NORMAL): " << this->classify << endl;
    o << "\t\t\t\t\t Gia thue: " << this->price << "dong/Ngay" << endl;
    if(this->tinhtrang == 0)
        o << "\t\t\t\t\t Tinh trang: TRONG" << endl;
    else 
        
        o << "\t\t\t\t\t Tinh trang: DA THUE" << endl;
}

ostream& operator<<(ostream& dip, const Room& tag)
{
    dip << "\t\t\t\t\t Ma phong: " << tag.maphong << endl;
    dip << "\t\t\t\t\t Loai phong (VIP & NORMAL): " << tag.classify << endl;
    dip << "\t\t\t\t\t Gia thue: " << tag.price << " dong/Ngay" << endl;
    return dip;
}

istream& operator>>(istream& dip, Room& tag)
{
    cout << "\t\t\t\t\t Nhap ma phong: " ;
    dip >> tag.maphong;
    cout << "\t\t\t\t\t Nhap loai phong (VIP & NORMAL): ";
    dip.ignore();
    getline(dip, tag.classify);
    cout << "\t\t\t\t\t Nhap gia thue (dong/ngay): ";
    dip >> tag.price;
    dip.ignore();
    tag.tinhtrang = 0;
    return dip;
}

int Room::getPrice()
{
    return this->price;
}