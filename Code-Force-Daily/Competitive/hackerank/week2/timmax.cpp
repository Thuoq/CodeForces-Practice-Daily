#include<bits/stdc++.h>
using namespace std;
typedef vector<pair<int,int> > vi_p;
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t ;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vi_p arr;
        int idx_max = INT_MIN;
        int val_max = INT_MIN;
        for(int i = 0 ; i < n ; i ++) {
            int _;
            cin >> _;
            arr.push_back({i+1,_});
        }
        int ans = INT_MIN;
        for(int i = max(0,n-200) ;i  <n ; i++) {
            for(int j = i+1; j < n ; j ++) {
                ans = max(arr[i].first * arr[j].first - k*(arr[i].second | arr[j].second),ans);
            }
        }
        cout << ans << endl;
        
    }
}