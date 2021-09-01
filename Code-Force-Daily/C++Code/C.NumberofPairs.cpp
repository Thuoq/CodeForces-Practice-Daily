#include<bits/stdc++.h>
using namespace std;
typedef long long int ll_i;
void solution(int arr[],int n,int l, int r) {
    sort(arr,arr+n);
    ll_i ans = 0;
    for(int i = 0 ; i < n; i ++) {
        ans += upper_bound(arr+i+1,arr+n,r-arr[i]) - lower_bound(arr+i+1,arr+n,l-arr[i]);
    }
    cout << ans << endl;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t ;
    cin >> t;
    while (t--)
    {
        int n , l, r;
        cin >> n >> l >> r;
        int arr[n];
        for(int i = 0 ; i < n ; i ++) {
            cin >> arr[i];
        }
        solution(arr,n,l,r);
    }
    
}