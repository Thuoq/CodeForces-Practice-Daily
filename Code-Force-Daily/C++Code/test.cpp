#include <iostream>
using namespace std;

typedef long long int ll_i;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll_i n, m, x;
        cin >> n >> m >> x;
        ll_i r_o = x / n, c_o = x % n ? x%n: x/n;
        ll_i ans =  m * (c_o - 1) + r_o + 1;
    
        cout << ans << endl;
    }
}