#include<iostream>
#include<algorithm>
using namespace std;
bool comparator(int a,int b) {
    return a > b;
}
void solution(int arr[], int SIZE) {
    sort(arr,arr+SIZE,comparator);
    
    int lengthMax=0;
    int j = -1;
    for(int i = 0 ; i < SIZE ; i ++) {
        if(arr[i] >= (i-j)) {
            lengthMax = max(lengthMax,i-j);
        }
    }
    cout << lengthMax << endl;
    
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n ;
        int arr[n];
        for(int i = 0 ; i < n ; i ++) {
            cin >> arr[i];
        }
        solution(arr,n);
    }
}