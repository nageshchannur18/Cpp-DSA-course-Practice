#include <iostream>
using namespace std;
void reverse(int a[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[5] = {1, 4, 5, 6, 7};
    int b[5] = {2, 3, 6, 7, 1};

    reverse(a, 5);
    reverse(b, 5);

    printArray(a, 5);
    printArray(b, 5);
}