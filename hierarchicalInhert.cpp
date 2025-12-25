#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "Class A\n";
    }
};

class B : public A
{
};
class C : public A
{
};

int main()
{
    B obj1;
    C obj2;

    obj1.showA();
    obj2.showA();
}
