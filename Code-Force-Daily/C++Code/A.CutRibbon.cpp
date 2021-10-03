#include<bits/stdc++.h>
using namespace std;
#define clr(x) memset(x, 0, sizeof(x))

int A[3];
int solution(int n,int dp[]) {
    if(n == 0) {
        return 0;
    } 
    if(dp[n]) {
        return dp[n];
    }
    int best = 0;
  
    for(int j = 0 ; j < 3 ; j ++) { //[a_0,a_2]
        if(n - A[j] >= 0) {
            best= max(best, 1 + solution(i-A[j],dp));
        }
    }   
    dp[n] = best;
    return best;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, a , b , c ;
    cin >> n;
    int dp[n+1];
    for(int i = 0 ; i < 3 ; i ++) {
        cin >> A[i];
    } 
    clr(dp);
    cout << solution(n,dp) << endl;
    
}