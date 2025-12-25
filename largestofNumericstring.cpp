#include <iostream>
#include <string>
using namespace std;
string larNumstring(string &s)
{
    int freq[100]={0};
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]]++;
    }
    string result="";
    for(int i=99;i>=0;i--)
   {
        while(freq[i]--)
        {
            result+=char(i);
        }

   } 
}
int main()
{
    string s;
    cin >> s;
    cout << larNumstring(s) << endl;
    return 0;
}