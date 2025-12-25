#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // duplicate ignored

    cout << "Set elements: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;

    s.erase(10);

    cout << "After erasing 10: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;

    cout << "Count 20: " << s.count(20) << endl; // 1 = present

    auto it = s.find(5);//auto->automatically detect the data type of variable.
    if (it != s.end())
        cout << "5 found in set" << endl;

    return 0;
}
