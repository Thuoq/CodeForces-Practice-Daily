// Link problem: https://codeforces.com/problemset/problem/1335/A
#include <iostream>
using namespace std;
#define ll_int long long int
int main()
{
    int n;
    cin >> n;
    while (n)
    {
        ll_int number;
        cin >> number;
        if (number <= 2)
        {
            cout << 0 << endl;
        }
        else
        {
            if (number % 2 == 0)
            {
                cout << (number / 2) - 1 << endl;
            }
            else
            {
                cout << (number - 1) / 2 << endl;
            }
        }
        n--;
    }
}