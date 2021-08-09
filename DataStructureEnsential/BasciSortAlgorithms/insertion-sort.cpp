#include<iostream>
using namespace std;

int main() {
    int arr[] = {4,5,3,2,1};
    int N = sizeof(arr)/sizeof(int);
    // 6 5 3 1 8 7 2 4
    // i = 1
    // j = 0;
    // key = arr[i] = 5;
    // arr[1] = arr[1]= arr[0] = arr[1] = 6;
    for(int i = 1; i < N ; i ++) {
        int j = i -1;
        int key = arr[i];
        while(j >= 0 && arr[j] > key) {
            // assgin val trước cho val hiện tại 
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(auto x : arr) {
        cout << " " << x << endl;
    }

}