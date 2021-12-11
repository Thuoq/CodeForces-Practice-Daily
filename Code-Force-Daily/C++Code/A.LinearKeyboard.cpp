// Link problem :https://codeforces.com/contest/1607/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string src,target;
        cin >> src;
        cin >> target;
        int ans  = 0;
        map<char,int> st;
        for(int i = 0 ; i < src.size() ; i ++ ) {
            st[src[i]] =i+1;
        }
        for(int i = 0 ; i < target.size()-1 ; i ++ ) {
            ans += abs(st[target[i]] - st[target[i+1]]);
            // ans += abs(st[target[i]] -st[target[i+1]] )
        }
        cout << ans << endl;

    }
}