//Problem: https://open.kattis.com/problems/ratingproblems
#include<bits/stdc++.h>
using namespace std;
#define SETPRECISION cout << setprecision(4) << fixed;
int main(){
    int n,k;
    cin >> n >> k ;
    double _sum = 0.0;
    for(int i = 0 ; i < k ; i ++) {
        double _;
        cin >> _;
        _sum += _;
    }
    double _min = _sum;
    double _max = _sum;
    for(int i = n-k ; i > 0 ; i --) {
        _min += -3;
        _max += 3;
    }
    SETPRECISION
    cout << _min/n << " " << _max/n  << endl;
    
}