#include <iostream>
#include <limits.h>
#include <string
using namespace std;
void largestword(string str)
{
    int maxlen = INT_MIN;
    string largest;
    int n = str.length();
    int cuulen = 0;
    string cuurword = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            if (cuulen > maxlen)
            {
                maxlen = cuulen;
                largest = cuurword;
            }
            cuulen = 0;
            cuurword = "";
        }
        else
        {
            cuurword += str[i];
            cuulen++;
        }
        return largest;
    }
    if (cuulen > maxlen)
    {
        largest = cuurword;
    }
    cout << "largest word is " << largest << " with length " << maxlen << endl;
}
int main()
{
    string str;
    getline(cin, str);
    largestword(str);
    return 0;
}