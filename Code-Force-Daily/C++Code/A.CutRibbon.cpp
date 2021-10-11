#include<bits/stdc++.h>
using namespace std;
#define clr(x) memset(x, 0, sizeof(x))
#define fill(x, y) memset(x, y, sizeof(x))
int A[3];
int dp[6000];
int solution(int n) {
    if(n == 0) {
        return 0;
    }
    // cout << n  << dp[n] << A[0] << A[1] << A[2] << endl;
    if(dp[n]!= -1) {
        return dp[n];
    }
    for(int i = 1 ; i<= n ; i ++) {
        for(int j = 0 ; j < 3 ; j ++) {
            if(i - A[j] >= 0) {
                dp[i] = max(1 + solution(i-A[j]),dp[i]);
            }
        }
        cout << i << " " << dp[i] << endl;
    }
    return dp[n];
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;

    for(int i = 0 ; i < 3 ; i ++) {
        cin >> A[i];
    } 
    fill(dp,-1);
    cout << solution(n) << endl;
    
}