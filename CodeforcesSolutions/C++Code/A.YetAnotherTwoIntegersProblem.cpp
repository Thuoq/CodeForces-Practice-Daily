// Link problem: https://codeforces.com/problemset/problem/1409/A
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    for(int i = 0 ; i < test_case ; i ++) {
        int a, b;
        cin >> a >> b;
        int absolute = abs(a-b);
        if(absolute == 0) {
            cout << 0 << endl;
        }else {
            if(absolute % 10 ==0) {
                cout << absolute/10 << endl;
            }else {
                cout << absolute /10 +1 << endl;
            }
        }
    }
}