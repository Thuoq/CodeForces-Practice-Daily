// Linkproblem: https://codeforces.com/problemset/problem/703/A

#include<iostream>
using namespace std;

int main () {
    int sol = 0;
    int test;
    cin >> test;
    while(test) {
        int a, b ;
        cin >> a >> b;
        if (a > b) {
            sol ++;
        }else if (a < b ) {
            sol --;
        }
        test--;
    }
    if (sol > 0) {
        cout << "Mishka";
    }else if (sol <  0) {
        cout << "Chris";
    }else {
        cout << "Friendship is magic!^^";
    }
    cout << endl;
}