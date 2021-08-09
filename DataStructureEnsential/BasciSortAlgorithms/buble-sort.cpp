#include<iostream>
using namespace std;

int main() {
    int arr[] = {4,5,3,2,1};
    int N = sizeof(arr)/sizeof(int);
    for(int i = 1; i < N ; i ++) {
        for(int j = 0 ; j < N-i ; j ++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        } 
    }
    for(auto x : arr) {
        cout << " " << x << endl;
    }

}