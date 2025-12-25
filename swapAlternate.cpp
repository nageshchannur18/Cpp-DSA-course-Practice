#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        cout << endl;
    }
}

void swapAlternate(int a[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(a[i], a[i + 1]);
        }
    }
}

int main()
{
    int even[8] = {1, 5, 6, 3, 8, 9, 1, 4};
    int odd[5] = {11, 22, 33, 55, 99};

    swapAlternate(even, 8);
    printArray(even, 8);

    return 0;
}