// Link problem : https://codeforces.com/problemset/problem/379/A
#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int count = 0;
    int ans = 0;
    while(a>0) {
        
        ans ++;
        count ++;
        if(count == b) {
            count = 0;
            a++;
        }
        a--;
    }
    cout << ans ;
}