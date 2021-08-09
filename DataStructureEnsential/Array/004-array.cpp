#include<iostream>
using namespace std;
int binary_search(int arr[],int actualSize,int key) {
    int right = actualSize-1;
    int left = 0;
    while (left <= right)
    {
        int mid = (right + left) / 2;
        if(arr[mid] == key) {
            return mid;
        }else if (arr[mid] > key) {
            right = mid-1;
        }else {
            left = mid + 1;
        }
        /* code */
    }
    return -1;
    
}
int main() {
    int arr[] = {1,2,3,4,5,6};
    int key = 1;
    int n = sizeof(arr)/ sizeof(int);
    int idx = binary_search(arr,n,key);
    if(idx != -1) {
        cout << "This is locate at index " << idx << " !!";
    }else {
        cout << "Is Not FOUND !!" << endl;
    }
    return 0;
}