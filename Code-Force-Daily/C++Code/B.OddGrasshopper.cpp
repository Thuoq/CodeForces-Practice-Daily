#include<bits/stdc++.h>
using namespace std;
typedef long long int ll_i;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        
        ll_i x,n,ans;
        cin >> x >> n ;
        int time = n % 4;
        ll_i beg = n - time +1;
        for(ll_i i = beg ; i <= n ; i ++) {
            if(x % 2 == 0) {
                x-=(i);
            }else {
                x+=(i);
            }
        }
        cout << x << endl;
        
    }
    
}