// Linkproblem : https://codeforces.com/contest/1594/problem/C?fbclid=IwAR0FpvU0-bvr80Yg-s49xoPXeoRLlvGNSUZl5DyWbX25LUg-3zPI94fpmhQ

#include<bits/stdc++.h>

using namespace std;
 // chon x [1,n] voi moi i khong chia cho x thay vao moi i do 
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int n;
        char c;
        cin >> n >> c;
        string s; 
        cin >> s;
        string tmp(n,c);
        if(tmp == s ) {
            cout << 0 << endl;
            continue;
        }
        int m = n/2;
        bool flag = false;
        for(int i = n-1; i >=m ; i --) {
            if(s[i] == c) {
                flag = true;
                cout << 1 << endl;
                cout << i+1 << endl;
            }
            if(flag) {
                break;
            }
        }
        if(!flag) {
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;
        }
    }   
}