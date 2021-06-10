// Problem : vs ( i < j ) => ai > aj
// Problem : vs (i < j ) => ai > 2*aj
#include <iostream>
using namespace std;
typedef long long ll;
ll getInvCount(ll arr[], ll n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > 2 * arr[j])
                inv_count++;

    return inv_count;
}

int main()
{
    ll n;
    cin >> n;
    ll numbers[n];
    for (ll i = 0; i < n; i++)
    {
        ll _;
        cin >> _;
        numbers[i] = _;
    }
    cout << getInvCount(numbers, n);
}