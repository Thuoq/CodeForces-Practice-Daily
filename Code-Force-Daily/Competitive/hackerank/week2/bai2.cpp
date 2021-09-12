#include<cmath>
#include<iostream>
using namespace std;
typedef  long  double u_ll_i;
typedef unsigned long  long int ll_i;
int main() {
    u_ll_i n,k;
    cin >> n >> k;
    // [1,10^3] 999
    // [1,10^9] 99999999
    // int cnt_n = log10(n) +1;
    // if(cnt_n > 1) {

    // }
    // cout << cnt_n << endl;
    ll_i ans =  log10(n)*k +1;
    cout << ans << endl;

}