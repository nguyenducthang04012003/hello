#include<bits/stdc++.h>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int = 0, int = 0, int = 0);
    Date(const Date&);
    ~Date();
    void ShowRented();
    void Showrented(ofstream&);
    void ShowPaid();
    void ShowPaid(ofstream&);
    friend ostream& operator<<(ostream&, const Date&);
    friend istream& operator>>(istream&, Date&);
};