#include <iostream>
using namespace std;
string reversestring(string s)
{
    if (s.length() == 0)
        return " ";
    return reversestring(s.substr(1)) + s[0];
}
int main()
{
    cout << reversestring("abc") << endl;
    return 0;
}