// Link problem: https://codeforces.com/problemset/problem/1573/A?fbclid=IwAR3NYefLtYROiJjjm-oSsjhn1kyZPO9UdXraGlcib2ixYKv4TCSNlXSkfps
#include<bits/stdc++.h>

using namespace std;
typedef long long int ll_i;
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        ll_i n ;
        cin >> n;
        string s; 
        cin >> s;
        bool flag = (s[n-1] == '0');
        ll_i ans = 0;
        // cout << "HEllo world" << endl;
        for(ll_i i = 0 ; i< n ; i ++) {
            ans +=(s[i] - '0');
            if(s[i] != '0') {
                ans +=1;
            }
        }
        if(flag) {
            cout << ans  << endl;
        }else {
            cout << ans -1 << endl;
        }
    }
}