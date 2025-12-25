#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("nagesh");
    s.push("channur");
    s.push("appa-amma");
    cout << "top element" << s.top() << endl;
    cout << "size of stack" << s.size() << endl;
    s.pop();
    cout << "size of stack" << s.size() << endl;
    cout << "empty or not" << s.empty() << endl;
}