// Link Problem: https://codeforces.com/problemset/problem/486/A
#include <iostream>
using namespace std;
typedef long long int ll_int;

int main() {
    ll_int n;
    cin >> n;
    if( n % 2 == 0) {
        cout << n / 2;
    }else {
        cout << (-(n+1)) / 2;
    }
}