#include <iostream>
using namespace std;
double Avgofarray(int *arr, int n)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum / n;
}

int main()
{
    int size;
    cout << "size of array";
    cin >> size;

    int arr[size];
    cout << "enter the element of the array";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "average of the array:" << Avgofarr(arr, size) << endl;
    return 0;
}