#include <iostream>
using namespace std;

int search(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }

        return 0;
    }
}

int main()
{
    int arr[] = {1, 2, 4, 6, 3, 9};
    cout << "enter the elemet to search" << endl;
    int key;
    cin >> key;
    int found = search(arr, key, 6);
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }
    return 0;
}