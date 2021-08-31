// Link problem:https://codeforces.com/problemset/problem/1529/B

#include<iostream>
#include<algorithm>

using namespace std;
int main() {
    int test;
    cin >> test;
    while (test)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ;i  < n ; i ++) {
            int _;
            cin >>_;
            arr[i] = _;
        }
        sort(arr,arr+n);
        int ans = 1;
        for(int i = 0 ;i < n-1 ;  i ++ ) {
            if(arr[n-1] - arr[i] >= arr[n-1]) {
                ans++;
            }
        } 
        cout << ans << endl;
        test--;
    }
    
}