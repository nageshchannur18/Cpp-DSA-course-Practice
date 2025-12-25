#include <iostream>
#include <climits>
using namespace std;

// Function to find the row with the largest sum
int largestRowSum(int arr[][100], int rows, int cols)
{
    int maxSum = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;

        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i; // store which row has max sum
        }
    }

    return rowIndex; // returning the index of largest-sum row
}

int main()
{
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100];

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = largestRowSum(arr, rows, cols);
    cout << "Row with largest sum is: " << ans << endl;

    return 0;
}
