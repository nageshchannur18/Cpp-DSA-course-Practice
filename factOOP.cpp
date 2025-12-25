#include <iostream>
using namespace std;
class factorial
{
public:
    int num;

    int calculate()
    {
        int fact = 1;
        for (int i = 2; i <= num; i++)
        {
            fact *= i;
        }
        return fact;
    }
};

int main()
{
    factorial obj;
    cout << "enter a number" << endl;
    cin >> obj.num;

    int result = obj.calculate();
    cout << "factorial=" << result << endl;
    return 0;
}
