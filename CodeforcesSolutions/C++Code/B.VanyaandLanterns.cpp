// Link problem : https://codeforces.com/problemset/problem/492/B
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,l;
    cin >> n >> l;
    int numb[n];
    for(int i = 0 ;i < n ; i ++) {
        int _;
        cin >> _;
        numb[i] = _;
    }
    sort(numb,numb + n);
    int r = max(numb[0], l - numb[n-1])*2;
    for(int i = 0 ; i < n -1; i++) {
        
        r = max(r,numb[i+1] - numb[i]);
    }
    cout.precision(20);
    cout << fixed << r /2.0 << endl;
}