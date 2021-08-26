// Problem: https://codeforces.com/contest/1560/problem/A
#include<iostream>
using namespace std;
bool check(int num) {
    if(num % 3 == 0) {
        return false;
    }
    if(num % 10 == 3) {
        return false;
    }
    return true;
}
void solution(int num) {
    int tmp = 0;
        for(int i = 1; i < 6000; i ++) {
            if(check(i)) {
                tmp ++;
                if(tmp == num) {
                    cout << i << endl;
                    return;
                }
            }
        }
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int _;
        cin >> _;
        solution(_);
    }
}
