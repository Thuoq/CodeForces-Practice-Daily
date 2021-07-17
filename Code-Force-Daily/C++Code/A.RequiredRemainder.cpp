#include<iostream>
using namespace std;
typedef long long int ll_int;
void solution() {
    ll_int x, y,n;
    cin >> x >> y >> n;
    ll_int dive = n /x;
    ll_int ans = x*dive + y;
    if(ans > n) {
        ans-=x;
    }
    cout << ans << endl;
}
int main() {
    int test;
    cin >> test;
    while (test--)
    {
        solution();
    }
    
}