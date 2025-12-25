#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class student : public person
{
public:
    int rollno; 
    
      student() {
    
        cout << "child constructor..\n";
    }

    void getInfo()
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "rollno:" << rollno << endl;
    }
};

int main()
{
    student s1;
    s1.name = "nagesh channur";
    s1.age = 18;
    s1.rollno = 16;
    return 0;
}
