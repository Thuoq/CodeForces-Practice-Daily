// Problem: Rod Cutting 
#include<bits/stdc++.h>
using namespace std;
#define clr(x) memset(x, 0, sizeof(x))
int rodCutting(int v[], int L,int dp[]) {
    
    for(int i =1 ; i <= L; i++) {
        for(int j = 1 ; j <= i ; j ++) {
            int x_ = v[j] + dp[i-j];
            dp[i] = max(dp[i],x_);
        }

    }
    return dp[L];
}
int main () {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int L;
    cin >> L;
    int v[L];
    int dp[L];
    clr(dp);
    for(int i = 1 ; i <= L ;i ++) {
        cin >> v[i];
    }
    cout << rodCutting(v,L,dp);

}