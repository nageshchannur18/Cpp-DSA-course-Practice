#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(10); // 10
    d.push_front(5); // 5 10
    d.push_back(20); // 5 10 20

    cout << "Deque elements: ";
    for (int x : d)
        cout << x << " ";
    cout << endl;

    d.pop_front(); // removes 5
    d.pop_back();  // removes 20

    cout << "After pop operations: ";
    for (int x : d)
        cout << x << " ";
    cout << endl;

    return 0;
}
