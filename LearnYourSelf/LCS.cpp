// LOngest Common Subsequences
#include<bits/stdc++.h>

using namespace std;
typedef vector<int> v_i;
typedef vector<v_i> v_v_i;
int LCS(string s1, string s2) {
    int A = s1.size();
    int B = s2.size();
    v_i _(B+1,0);
    v_v_i dp(A+1,_);
    for(int i = A-1 ; i  >=0; i --) {
        for(int j = B-1;  j >=0 ; j --) {
            if(s1[i] == s2[j]) { // if s1[i] = s2[j]
                dp[i][j] = dp[i+1][j+1] + 1;
            }else { // another case
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }    
     
    return dp[0][0];
}
int main() {
    string s1 ="HABIT";
    string s2 ="THEIR";
    cout <<  LCS(s1,s2);
}