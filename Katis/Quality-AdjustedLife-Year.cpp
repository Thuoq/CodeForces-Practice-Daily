// Linkproblem: https://open.kattis.com/problems/qaly
#include<bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int N;
    cin >> N ;
    float sum = 0.000;
    while(N--) {
        float x,y;
        cin >> x >> y;
        sum += (x*y);
    }
    cout << sum << endl;
}