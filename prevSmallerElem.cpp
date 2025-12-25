#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> prevSmallerElement(vector<int> arr, int n)
{
    vector<int> ans(arr.size(), 0);
    stack<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        while (s.size() > 0 && s.top() >= arr[i])
        {
            s.pop();
        }
        if (s.size() == 0)
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> ans = prevSmallerElement(arr, arr.size());
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}