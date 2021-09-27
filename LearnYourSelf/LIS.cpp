// Longest Increase Subsequences
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> v_i;
int LIS(string s) {
    int n = s.size();
    v_i dp(n,1);
    for(int i = n-1; i >= 0 ; i--) {
        for(int j = i ; j <n; j ++) {
            if(s[i] < s[j]) {
                dp[i] = max(dp[i],1+dp[j]);
            }
        }
    }
    // for(auto &el :dp) {
    //     cout << el << " ";
    // }
    // cout << "\n";

    return *max_element(dp.begin(), dp.end());
}
int main() {
    string s = "CACBOHYDRAT";
    cout << LIS(s) << endl;
}