#include<iostream>
using namespace std;

int binarySearchRecursive(int arr[] , int key , int left , int right) {
    int middle ;
    if(left > right) {
        return -1;
    }
    middle = (right + left ) / 2;
    if(arr[middle] == key) {
        return middle;
    }
    if(arr[middle] > key) {
       return binarySearchRecursive(arr,key,left,middle-1);
    }else {
       return binarySearchRecursive(arr,key,middle+1,right);
    }
}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    cout << "Position is : "<< binarySearchRecursive(arr,8,0,8);
            
}