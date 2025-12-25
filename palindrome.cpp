#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a;
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    array<int, 4> a = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
        cout << a[i] << " ";
    cout << endl;
    for (auto i : a)
        cout << endl;
    cout << a.size() << endl;
    return 0;
}