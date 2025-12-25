// #include <iostream>
// #include <deque>
// using namespace std;

// int main()
// {
//     deque<int> d;
//     d.push_back(10);
//     d.push_front(5);
//     d.push_back(20);
//     cout << "element" << d.at(1);

//     cout << "deque element" << endl;
//     for (int x : d)
//         cout << x << " ";
//     cout << endl;

//     d.erase(d.begin());
//     d.erase(d.begin()+1);

//     cout << "ater erases operations";
//     for (int x : d)
//         cout << x << " ";
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     priority_queue<int> pq;

//     pq.push(30);
//     pq.push(20);
//     pq.push(40);
//     pq.push(60);
//     pq.push(70);
//     pq.push(90);
//     pq.push(10);
//     cout << "top element" << pq.size() << endl;
//     cout << "top element" << pq.empty() << endl;
//     cout << "top element" << pq.swap() << endl;
//     cout << "top element" << pq.top() << endl;
//     cout << "top element" << pq.pop() << endl;
//     cout << "top element" << pq.emplace() << endl;

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     priority_queue<int> pq;

//     pq.push(30);
//     pq.push(20);
//     pq.push(40);
//     pq.push(60);

//     cout << "Size: " << pq.size() << endl;
//     cout << "Is empty? " << pq.empty() << endl;

//     cout << "Top element: " << pq.top() << endl; // largest element

//     pq.pop(); // removes the top element (60)
//     cout << "Top after pop: " << pq.top() << endl;

//     pq.emplace(50); // insert 50
//     cout << "Top after emplace 50: " << pq.top() << endl;

//     return 0;
// }
// priority_queue<int,vector<int>,gretar<int>>pq;min heap

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

    auto it = s.find(5); // set<int>::iterator it=s.find(20);
    if (it != s.end())
        cout << "5 found in set" << endl;

    return 0;
}
