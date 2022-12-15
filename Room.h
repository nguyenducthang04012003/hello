#include<bits/stdc++.h>
using namespace std;

class Room
{
private:
    int maphong;
    int tinhtrang;
    string classify;
    int price;
public:
    Room(int = 0, int = 0, string = "", int = 0);
    Room(const Room&);
    ~Room();
    void Show();
    void Show(ofstream&);
    friend ostream& operator<<(ostream&,const Room&);
    friend istream& operator>>(istream&, Room&);
    int getPrice();
};