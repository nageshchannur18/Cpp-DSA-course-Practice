#include <iostream>
using namespace std;

class oddeve
{
private:
    int a;

public:
    void getdata();
    void putdata();
};

void oddeve::getdata()
{
    cout << "\n enter the no. to check";
    cin >> a;
}
void oddeve::putdata()
{
    if (a % 2 == 0)
        cout << "\n even";
    else
        cout << "\n odd";
}
int main()
{
    oddeve aa;
    aa.getdata();
    aa.putdata();
    return 0;
}