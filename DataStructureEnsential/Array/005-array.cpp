#include<iostream>
using namespace std;
void printArray(int arr[], int SIZE) {
    for(int i = 0 ; i < SIZE ; i ++) {
        cout << arr[i] << " ";
    }
}
void reverseArr(int arr[], int SIZE) {
    int start = 0;
    int end = SIZE-1;
    while(start < end) {
        swap(arr[start],arr[end]);

        start+=1;
        end-=1;
    }
}
int main() {
    int arr[]  = {1,2,3,4,5,6};
    int n = sizeof(arr)/ sizeof(int);
    reverseArr(arr,n);
    printArray(arr,n);

    return 0;
}