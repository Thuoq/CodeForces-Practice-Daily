#include<iostream>
using namespace std;
void print(int arr[],int SIZE) {
    for(int i = 0 ;i  <SIZE ;i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[] , int s,int e) {
    int pivotIDX = e;
    int elementPivot = arr[pivotIDX];
    int j = s-1;  // set to low -1
    for(int i = s ; i < e ; i ++) {
        if(arr[i] < elementPivot) {
            j ++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[j+1],arr[pivotIDX]);
    return j+1;
}
void quickSort(int arr[],int s, int e) {
    if(s < e) {
        int pivotIdx = partition(arr,s,e);
        quickSort(arr,s,pivotIdx-1);
        quickSort(arr,pivotIdx+1,e);
    }
}
int main() {
    int n ; 
   
    int arr[7] = {6,4,3,1,34,7,5};
    //partition(arr,7,6);
    quickSort(arr,0,6);
    print(arr,7);
}   