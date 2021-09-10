// Linkproblem:https://codeforces.com/problemset/problem/1550/A
#include<iostream>

using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int cnt = 1;
        int sum = 0;
        for(int i = 1; i <= s ; i +=2) {
            sum +=i;
            cnt ++;
            if(sum >= s) {
                break;
            }
        }
        if( s == 2) {
            cout << cnt << endl;
        }else {
            cout << cnt-1<< endl;
        }
    }
    
}