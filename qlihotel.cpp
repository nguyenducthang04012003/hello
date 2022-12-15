#include"Person.h"
#include"Room.h"
#include"Date.h"
// #include"Thuephong.h"
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    Person b("thang", "12345", 18, "0884294924");
    cout << b;
    Room n(23, 1, "VIP", 30000);
    cout << n;
    Date a(12, 3, 2002);
    cout << a;
    return 0;
}