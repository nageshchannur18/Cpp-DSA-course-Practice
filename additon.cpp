#include <iostream>
using namespace std;

class addition
{
    int a, b;

public:
    void getdata();
    void putdata();
};
void addition::getdata()
{
    cout << "\nenter the no's";
    cin >> a >> b;
}
void addition::putdata()
{
    cout << "\n addition" << a + b;
}

int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();

    return 0;
}
