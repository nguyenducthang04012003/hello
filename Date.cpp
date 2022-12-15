#include"Date.h"

Date::Date(int day, int month, int year)
    :day(day), month(month), year(year)
{
}

Date::Date(const Date& d)
{
    this->day = d.day;
    this->month = d.month;
    this->year = d.year;
}

Date::~Date()
{
}

void Date::ShowRented()
{
    cout << "\t\t\t\t\t Ngay thue: " << this->day << "/" 
        << this->month << "/" << this->year << endl;
}

void Date::Showrented(ofstream& o)
{
    o << "\t\t\t\t\t Ngay thue: " << this->day << "/" 
        << this->month << "/" << this->year << endl;
}

void Date::ShowPaid()
{
    cout << "\t\t\t\t\t Ngay tra: " << this->day << "/" 
        << this->month << "/" << this->year << endl;
}

void Date::ShowPaid(ofstream& o)
{
    o << "\t\t\t\t\t Ngay tra: " << this->day << "/" 
        << this->month << "/" << this->year << endl;
}

ostream& operator<<(ostream& dip, const Date& tag)
{
    dip << "\t\t\t\t\t Ngay: " << tag.day << "/"
        << tag.month << "/" << tag.year << endl;
        return dip;
}

istream& operator>>(istream& dip, Date& tag)
{
    cout << "\t\t\t\t\t Nhap ngay, thang, nam: ";
    dip >> tag.day >> tag.month >> tag.year ;
    cout << endl;
    return dip;
}