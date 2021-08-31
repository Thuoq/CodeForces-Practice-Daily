// Linkproblem:https://codeforces.com/problemset/problem/1312/A?fbclid=IwAR2QM2KfHe5m9Wu5Dtks0rQaarCA02IusnwWoM5NVH7CZtc0uUyXmyfKQQU

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t ;
    cin>> t;
    while(t--) {
        int n ,m;
        cin >> n >> m;
        // m < n;
        if(n % m == 0) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}