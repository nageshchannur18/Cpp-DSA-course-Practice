#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q; // First in first out

    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30

    cout << "Front element: " << q.front() << endl; // 10
    cout << "Back element: " << q.back() << endl;   // 30

    q.pop(); // removes 10

    cout << "After pop, new front: " << q.front() << endl; // 20

    cout << "Queue size: " << q.size() << endl;

    return 0;
}
