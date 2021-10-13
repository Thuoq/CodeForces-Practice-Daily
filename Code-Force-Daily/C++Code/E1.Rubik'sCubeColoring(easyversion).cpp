#include<bits/stdc++.h>
using namespace std;
typedef long long int ll_i;
int mod = (int)1e9+7;

int main() {
    
    int k;
    cin>>k;
    ll_i ans = 1;
    for(int i = 0 ; i < k-1 ; i ++){
        ans = ans*ans % mod * 16 % mod;
    }
    cout<< ans*6 % mod;

}