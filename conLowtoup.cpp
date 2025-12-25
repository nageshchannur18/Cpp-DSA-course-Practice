#include <iostream>
#include <string.h>
using namespace std;
void conlow1toup(string &s)
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    cout << s << endl;
}
int main()
{
    string s;
    getline(s);
    conlow1toup(s);
    return 0;
}