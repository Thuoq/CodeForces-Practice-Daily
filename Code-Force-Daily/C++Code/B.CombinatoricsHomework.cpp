// Linkproblem: https://codeforces.com/problemset/problem/1574/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll_i;
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t ; 
    cin >> t;
    while (t--)
    {
        
        ll_i a, b,c,m;
        cin >> a >> b  >> c >> m;
        ll_i _max = max({a,b,c});
        ll_i orthers = (a+b+c) - _max;
        ll_i L = (a+b+c)-1 - 2*orthers; // min can do
        ll_i R = a-1 +b-1 + c-1; // max can do
        if(L <= m and m <= R) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
        /* code */
    }
}