#include<iostream>
using namespace std;
typedef long long int ll_i;
void solution(ll_i arr[],int SIZE) {
    for(int i = 0 ;i < SIZE-1; i ++ ) {
        cout << arr[i] + arr[i +1] <<" ";
    }
    cout << arr[SIZE-1];
    cout << "\n";
}

int main() {
    int n ;
    cin >> n;
    ll_i arr[n];
    for(int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }
    solution(arr,n);
}