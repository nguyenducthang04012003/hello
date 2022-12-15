#include"Thuephong.h"

Thuephong::Thuephong()
{
}

Thuephong::Thuephong(const Person &p, const Room &r, const Date &d1, const Date &d2, int day)
{
    this->Per = p;
    this->room = r;
    this->DateRented = d1;
    this->DatePaid = d2;
    this->NumberOfDaysRented = day;
}

Thuephong::~Thuephong()
{
}

void Thuephong::Show()
{
    this->Per.Show();
    this->room.Show();
    this->DateRented.ShowRented();
    this->DatePaid.ShowPaid();
    if(this->getMonney() > 0)
    {
        cout << "\t\t\t\t\tSo ngay thue: " << this->NumberOfDaysRented << endl;
        cout << "\t\t\t\t\tSo tien thanh toan: " << this->getMonney() << endl;
    }
}

// void Thuephong::Show(ofstream &o)
// {
//     this->Per.Show(o);
//     this->Room.Show(o);
//     this->DateRented.ShowRented(o);
//     this->DatePaid.ShowPaid(o);
//     if(this->getMonney() > 0)
//     {
//         cout << "\t\t\t\t\tSo ngay thue: " << this->NumberOfDaysRented << endl;
//         cout << "\t\t\t\t\tSo tien thanh toan: " << this->getMonney() << endl;
//     }
// }

long long Thuephong::getMonney()
{
    return this->room.getPrice() * this->NumberOfDaysRented;
}