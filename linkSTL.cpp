#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l = {20, 30, 40, 50};

    l.push_back(5);
    l.push_front(10);
    l.sort();
    l.reverse();

    for (auto i : l)
        cout << i << " ";
    return 0;
}
