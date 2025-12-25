#include <iostream>
using namespace std;

class Demo
{
public:
    int x;

private:
    int y;

public:
    void setY(int val)
    {
        y = val;
    }

    void show()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

int main()
{
    Demo d;
    d.x = 10;
    d.setY(20);
    d.show();

    return 0;
}