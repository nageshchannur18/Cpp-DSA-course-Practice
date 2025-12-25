#include <iostream>
using namespace std;
void nextGreaterElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int nextGreater = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }
        cout << "Next greater element for " << arr[i] << " is " << nextGreater << endl;
    }
}
int main()
{
    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreaterElement(arr, n);
    return 0;
}
