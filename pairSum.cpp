#include <iostream>
using namespace std;

void pairSum(int arr[], int size, int target)
{
    cout << "Pairs are:" << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " + " << arr[j] << " = " << target << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    pairSum(arr, size, target); // function call

    return 0;
}
