// https://codeforces.com/problemset/problem/155/A

#include<iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    int max = 0;
    int min =0  ;
    int count = 0;
    for(int i = 0 ; i < test; i ++ ) {
        int _;
        cin >>_;
        if( i  > 0) {
            if (max < _ ) {
                max = _;
                count++;
            }
            if(_ < min) {
                min = _;
                count++;
            }
        }else {
            max = _;
            min = _;
        }
    }
    cout << count;
    
}