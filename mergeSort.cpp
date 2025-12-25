#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter the n(size) m " << endl;
    cin >> n >> m;

    int a[n];
    cout << "enter ele of first array";
    for (int i = 0; i < n; i++)
        cin >> a[n];

    int b[m];
    cout << "enter size of secondary array";
    for (int i = 0; i < m; i++)
        cin >> b[m];

    int c[n + m];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }
    cout << "merged array";
    for (int i = 0; i < n + m; i++)
        cout << c[i] << " ";
    return 0;
}
