#include <iostream>
using namespace std;
void towerofHanoi(int n, char source, char destination, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerofHanoi(n - 1, source, helper, destination);
    cout << "move from " << source << " to " << destination << endl;
    towerofHanoi(n - 1, helper, destination, source);
}
int main()
{
    int n;
    cout << "enter the number of disks " << endl;
    cin >> n;
    towerofHanoi(n, 'A', 'C', 'B');
    return 0;
}