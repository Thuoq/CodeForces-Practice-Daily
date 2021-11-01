#include<bits/stdc++.h>

using namespace std;
typedef vector<int> v_i;

void showConnected(v_i graph[] , int SIZE) {
    for(int i = 1 ; i < SIZE ; i ++) {
        for(auto edges : graph[i]) {
            cout << i << "--->" << edges << endl;
        }
    }
}
// A[n+1]
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        v_i graph[n];
        // a_i  
        int VAL[n];
        int _sum_or = 0;
        for(int i  = 1 ; i <= n ; i ++) {
            cin >> VAL[i];
            _sum_or^=VAL[i];
        }
        
        for(int i = 1; i < n ; i ++) {
            int u,v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        showConnected(graph,n);
    }
}