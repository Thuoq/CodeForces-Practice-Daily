#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case)
    {
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            int c = a / b;
            cout << (b * (c + 1)) - a << endl;
        }
        else if (a < b)
        {
            cout << b - a << endl;
        }
        test_case--;
    }
}
