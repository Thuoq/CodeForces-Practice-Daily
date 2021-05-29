// Link problem : https://codeforces.com/problemset/problem/268/A
#include<iostream>
using namespace std;

int main() {
    int teams;
    cin >> teams;
    int arr[teams][2];
    for(int i = 0 ; i < teams; i ++) {
        int n1,n2; 
        cin >> n1 >> n2;
        arr[i][0] = n1;
        arr[i][1] = n2;
    }   
    int ans = 0;
    for(int i = 0 ; i < teams; i  ++) {
        for(int j = 0 ;  j< teams; j ++) {
            if(i != j && arr[j][1] == arr[i][0]) {
                ans ++;
            }
        }
    }
    cout << ans;
}
