#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << "Top element: " << pq.top() << endl; // 50

    pq.pop(); // removes 50

    cout << "New top: " << pq.top() << endl; // 30

    return 0;
}
