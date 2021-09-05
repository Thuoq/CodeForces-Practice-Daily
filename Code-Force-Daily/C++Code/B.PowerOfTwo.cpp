// Link Problem: https://codeforces.com/contest/702/problem/B?fbclid=IwAR21AUrgPPnK5cN9wmrFDRVQB6FqaPptyA-oB-CMIu582benI6_muHcNSOM
#include<bits/stdc++.h>
using namespace std;
#define isPowerOfTwo(S) (!(S & (S - 1)))
typedef long long int ll_i;
typedef map<ll_i,int> mp;
mp stored;
void calculatorPowerOf2(int max) {
    for(int i = 1 ; i <= max ; i ++) {
        stored[pow(2,i)] = 1;
    }
}
void solution(int arr[] , int n) {
    int ans =0;
    mp hash;
    // Pow(2,[1,31]) :2 4 8 16 32
    //                7 3 2 1
    //                i
    // 2-7,4-7,8-7 | 2- 3 4-3  8-3 | 0 2 6 | 4-1 = 3
    // {7: 1, 3:1, 2: 6}
    //  6 6 2 2 2 2 2 2 
    for(int i = 0 ; i < n ; i ++) { // 10^5 
        for(auto el : stored) { // 50 
            ll_i numFind = el.first - arr[i];
            if(hash.count(numFind)) { 
                ans +=hash[numFind];
                hash[numFind]+=1;
                break;
            }else {
                hash[arr[i]] =1;
            }
        }
    }
    cout << ans << endl;
}
int main() {
    calculatorPowerOf2(31);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ;i ++) {
        cin >> arr[i];
    }
    solution(arr,n);
}