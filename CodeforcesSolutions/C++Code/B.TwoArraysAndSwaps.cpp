// Link problem: https://codeforces.com/problemset/problem/1353/B
#include<iostream>
#include<algorithm>
using namespace std;

void input(int arr[], int n ){
    int min = 0;
    for(int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }
}
int sum(int arr[], int n ) {
    int ans = 0;
    for (int i = 0 ; i < n ; i ++) {
        ans += arr[i];
    }
    return ans;
}

void solution() {
    int n,k;
    cin >> n >> k;
    int a[n];
    int b[n];
    input(a,n);
    input(b,n);
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    int result  = 0;
    int count = 0;
    for(int i = 0; i < n ; i ++) {
        if(count == k) {
            break;
        }
        if(a[i] < b[i]) {
            a[i] = b[i];
            count ++;
        }
    }
    cout << sum(a,n) << endl;
}

int main() {
    int test;
    cin >> test;
    while(test) {
        solution();
        test--;
    }  
}