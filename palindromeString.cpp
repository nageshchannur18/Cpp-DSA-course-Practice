#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    int len = getLength(name);
    cout << "Length = " << len << endl;

    reverse(name, len);
    cout << "Reversed name = " << name << endl;

    bool x = checkPalindrome(name, len);
    cout << "Palindrome = " << x << endl;

    return 0;
}
