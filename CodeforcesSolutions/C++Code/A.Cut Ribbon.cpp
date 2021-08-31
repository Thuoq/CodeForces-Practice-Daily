// Link problem : https://codeforces.com/problemset/problem/189/A

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n ,a[3];
    cin >> n;
    for(int i = 0 ; i < 3 ; i ++) {
        int num;
        cin >> num;
        a[i] = num;
    }
    sort(a,a+3);
    int ans = 0;
    while(n) {
        for(int i = 0 ; i < 3; i ++) {
            cout << a[i];
            if(a[i] < n) {
                n-= a[i];
                ans ++;
                 
            }else {
                continue;
            }
        }
    }
    cout << ans;
}