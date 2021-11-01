// Linkproblem: https://codeforces.com/problemset/problem/706/B
#include<bits/stdc++.h>

using namespace std;
typedef vector<int> v_i;
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    v_i prices(n,0);
    for (auto &el: prices) {
        cin >> el;
    }
    sort(prices.begin(),prices.end());
    int q;
    cin >> q;
    while(q--) {
        int money;
        cin >> money;
        v_i::iterator up;
        up=upper_bound(prices.begin(),prices.end(),money);

        
            
    
        cout << up-prices.begin() << endl;

            
        

    }
}