#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length() - 1;
    bool flag = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
    return 0;
}
