#include <iostream>
using namespace std;

class oneten
{
  public:
    void putdata()
    {
        int i, n = 10;
        for (i = 0; i < n; i++)
        {
            cout << "\n"
                 << i;
        }
    }
};
int main()
{
    oneten aa;
    aa.putdata();
    return 0;
}