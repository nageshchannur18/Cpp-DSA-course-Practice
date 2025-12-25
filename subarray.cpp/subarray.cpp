#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Subarrays:\n";

    for (int i = 0; i <= n - 1; i++)
    {
        int sum = 0; // running sum
        for (int j = i; j <= n - 1; j++)
        {
            sum += arr[j]; // add current element

            // print current subarray from i to j using sum trick
            cout << "Subarray (" << i << "," << j << ") sum = " << sum << endl;
        }
    }

    return 0;
}
