#include <iostream>
using namespace std;

class maxmin
{
private:
    int a, b;

public:
    void getdata();
    void putdata();
};

void maxmin::getdata()
{
    cout << "\n enter the 2 no. ";
    cin >> a >> b;
}
void maxmin::putdata()
{
    if (a > b)
        cout << "max no.=" << a;
    else
        cout << "\n max no.=" << b;
}
int main()
{
    maxmin aa;
    aa.getdata();
    aa.putdata();
    return 0;
}