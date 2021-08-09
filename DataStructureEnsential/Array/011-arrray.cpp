#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    int prefix[n];
    prefix[0] = arr[0];
    for(int i = 1;  i < n ; i ++) {
        prefix[i] = arr[i] + prefix[i-1];
    }
    int largest = 0;
    for(int i = 0; i < n ; i ++) {
        for(int j = i ; j < n ; j ++) {
            int sum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j];
            largest = max(largest,sum);
        }
    }
    cout << largest << endl;
}