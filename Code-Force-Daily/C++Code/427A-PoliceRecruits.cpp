//https://codeforces.com/problemset/problem/427/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int police_count = 0;
    for (int i = 0; i < n; i++)
    {
        int _;
        cin >> _;
        if (_ != -1)
        {
            police_count += _;
        }
        else
        {
            if (police_count != 0)
            {
                police_count--;
            }
            else
            {
                ans++;
            }
        }
    }

    cout << ans;
}