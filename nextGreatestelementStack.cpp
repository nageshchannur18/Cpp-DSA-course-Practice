#include <iostream>
using namespace std;
stack<int> s;
void nextGreaterElement(int arr[], int n)
{
    int *result = new int[n];
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            result[i] = -1;
        }
        else
        {
            result[i] = s.top();
        }
        s.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Next greater element for " << arr[i] << " is " << result[i] << endl;
    }
    delete[] result;
}
int main()
{
    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreaterElement(arr, n);
    return 0;
}