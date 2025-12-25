#include <iostream>
using namespace std;

class reverse
{
    int n;

public:
    void getdata();
    void putdata();
};
void reverse::getdata()
{
    cout << "\n enter the no. to find rev";
    cin >> n;
}
void reverse::putdata()
{
    int rev = 0;
    while (n > 0)
    {
        rev = (rev * 10) + n % 10;
        n = n / 10;
    }
    cout << "\n reverse=" << rev;
}
int main()
{
    reverse aa;
    aa.getdata();
    aa.putdata();
    return 0;
}