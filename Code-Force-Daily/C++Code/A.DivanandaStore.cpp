// Link problem: https://codeforces.com/contest/1614/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll_i;
typedef vector<ll_i> v_ll_i;
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll_i n,l,r,k;
        cin >> n >> l >> r >> k;
        v_ll_i bars;
        for(int i = 0 ; i < n ; i ++) {
            
            ll_i chocolates;
            cin >> chocolates;
            if(chocolates >=l and chocolates <= r) {
                bars.push_back(chocolates);
            }
        }
        sort(bars.begin(),bars.end());
        int ans = 0;
        for(int i = 0 ; i < bars.size() ; i ++) {
            if(k >= bars[i]) {
                ans ++;
                k-= bars[i];

            }else {
                break;
            }
        }
        cout << ans << endl;
        /* code */
    }
    
}