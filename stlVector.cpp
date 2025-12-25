#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5, 1); //{} not work
    vector<int> last(a);
    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << "print a" << endl;
    for (int i : a)
    {

        cout << i << " ";
    }
    cout << "size->" << v.capacity() << endl;
    v.push_back(1);
    cout << "size->" << v.capacity() << endl;
    v.push_back(2);
    cout << "size->" << v.capacity() << endl;

    v.push_back(3);
    cout << "size->" << v.capacity() << endl;
    v.push_back(4);
    cout << "size->" << v.capacity() << endl;

    v.insert(v.begin(), 8);
    cout << "after insertion";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    v.insert(v.begin() + 1, 6);
    cout << "after insertion";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    v.pop_back();
    for (int i : v) // for(datatype variable:container)(range-based for loop)
        cout << i << " ";
    cout << endl;
}
