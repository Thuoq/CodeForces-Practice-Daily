// 3C6
#include<iostream>
using namespace std;
int a[4] = {};
void display(int arr[] , int k) {
    for(int i = 1; i <= k ; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// (1) : [1,4] : arr[1] = 1;
// (2) : [2,5] : arr[2] = 2;
// (3) : [3,6] : arr[3] = 3;  // 1 2 3
// (3) :  j = 4 : [4,7]

void backtrack(int i , int arr[], int n , int k,int &count) {
    for (int j = arr[i-1] + 1; j <= n-k+i ; j ++) {
        arr[i] = j;
        if( i == k) {
            count++;
            display(arr,k);
        }else {
            backtrack(i + 1, arr, n, k, count);
        }
    }
}
int main() {
    int n , k;
    int count = 0;
    cin >> n >> k;
    backtrack(1, a, n, k, count);
    cout << count << endl;
}