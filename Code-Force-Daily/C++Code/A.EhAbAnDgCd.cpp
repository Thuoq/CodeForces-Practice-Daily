// Problem: https://codeforces.com/problemset/problem/1325/A?fbclid=IwAR3o1_dfxDXl-TzFJ0CnuHFTUAxZ6VjwXOhqE1_gCE3aTyxzFLT67cPpq6E
#include<iostream>
using namespace std;
typedef long long ll;
ll gcd(ll m, ll n) {
    ll r = 0, a, b;
    a = (m > n) ? m : n;
    b = (m < n) ? m : n;
    r = b;
    while (a % b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
ll lcm(ll m, ll n) {
    ll a;
    a = (m > n) ? m: n;
    while (true) {
        if (a % m == 0 && a % n == 0)
            return a;
            ++a;
    }
}
void solution(ll num) {
    for(ll i = 1 ; i < num ; i ++) {
        ll s = i;
        ll e= num;
        while (s < e)
        {
            ll middle = (e+s)/2;
            ll tmp =gcd(i,middle) + lcm(i,middle); 
            if(tmp==num) {
                cout << i << " " << middle << endl;
                return;
            }else if (tmp > num) {
                e = middle;
            }else {
                s = middle+1;
            }
        }
        
    }
}
int main() {
    int t;
    cin >> t; 
    while(t--) {
        ll _;
        cin >> _;
        solution(_);
    }
}