// Linkproblem: https://codeforces.com/problemset/problem/1562/A
#include<iostream>
using namespace std;
int divideByTwo(int a) {
    return a/ 2;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int l , r;
        cin >> l >> r;
        int tmp = divideByTwo(r);
        if(tmp >=  l) {
            if(r %2 != 0) {
                cout << tmp << endl;
            }else {
                cout << tmp - 1 << endl;
            }
        }else{
            cout << r % l << endl;
        }
    }
}