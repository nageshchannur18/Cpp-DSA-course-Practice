#include <iostream>
using namespace std;
void tripletSum(int arr[], int size, int target)

{
    cout << "paris are" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << '+' << arr[j] << '+' << arr[k] << '=' << target << endl;
                }
            }
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int target;
    cout << "enter target sum";
    cin >> target;

    tripletSum(arr, size, target);

    return 0;
}
