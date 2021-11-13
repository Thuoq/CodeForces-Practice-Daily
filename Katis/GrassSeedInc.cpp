//Problem: https://open.kattis.com/problems/grassseed

#include<bits/stdc++.h>
using namespace std;
#define SETPRECISION cout << setprecision(7) << fixed;
int main() {
    float C;
    int L;
    cin >> C >> L;
    float ans = 0.0;
    for(int i = 0 ; i < L ; i ++) {
        float w,h;
        cin >> w >> h;
        ans += (w*h);
    }
    SETPRECISION
    cout << ans * C << endl;
}