#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "apple";
    m[5] = "banana";
    m.insert({3, "orange"});

    cout << "Map elements:" << endl;
    for (auto p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    m.erase(5);

    cout << "After erase:" << endl;
    for (auto p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
