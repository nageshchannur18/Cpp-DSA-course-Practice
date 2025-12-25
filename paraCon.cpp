#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;

    student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << name << "_ " << age << endl;
    }
};

int main()
{
    student s1("nagesh", 18);
    s1.display();
}