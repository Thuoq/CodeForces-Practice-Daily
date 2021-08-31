// Link problem: https://codeforces.com/problemset/problem/758/A
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max = 0;
    int arr[n];
    for (int i = 0 ; i < n ; i ++) {
        int _;
        cin >> _;
        arr[i] = _;
        if(_ > max) {
            max = _;
        }
    }
    int count = 0;
    for(int i = 0 ; i < n ; i ++) {
        count  += max - arr[i];
    }
    cout << count;
}