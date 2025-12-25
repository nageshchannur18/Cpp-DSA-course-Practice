#include <iostream>
using namespace std;

class xyz
{
private:
    int a, b;

public:
    void getdata();
    void putdata();
};

void xyz::getdata()

{
    cout << "\n enter the two number";
    cin >> a >> b;
}

void xyz::putdata()
{
    cout << "\na=" << a << "\tb=" << b;
}
int main()
{
    xyz aa[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        aa[i].getdata();
    }
    for (i = 0; i < 5; i++)
    {
        aa[i].putdata();
    }
    return 0;
}
