#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;

    student()
    {
        name = "unknown";
        age = 0;
        cout << "constructor called!" << endl;
    }

    void display()
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
    }
};

int main()
{
    student s1;

    s1.display();
    return 0;
}