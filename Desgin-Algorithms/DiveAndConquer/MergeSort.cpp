#include<iostream>
using namespace std;
int N = 10;
void bornRandomNumbers(int N, int arr[])
{
    srand(time(NULL));
    /* generate secret number between 1 and N: */
    for (int i = 0; i < N; i++)
    {
        int a = rand() % N + 1;
        arr[i] = a;
    }
}
void merge(int arr[],int leftIdx, int MiddleIdx, int rightIdx ) {
    // Step 1: Create duplicate array left and right
    int n_left = MiddleIdx - leftIdx + 1;
    int n_right = rightIdx - MiddleIdx;
    
    int L[n_left],R[n_right];
    for(int i = 0 ; i < n_left ; i ++ ) {
        L[i] = arr[leftIdx+i];
    }
    for (int j = 0 ; j < n_right ; j ++) {
        R[j] = arr[MiddleIdx + 1 + j];
    }
    // Step 2 ; seeing current Idx sub array and main Array ;
    int i,j, k ;
    i = 0;
    j = 0;
    k = leftIdx;
    // Run compare Left Array an Right Array;
    while(i < n_left && j < n_right) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Sẽ có lúc 1 trong 2 cái kia hết trướng ta vẫn phải check xem  cho các phần tử còn lại vào 
    // Left side
    while( i < n_left) {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Right Side
    while(j < n_right) {
        arr[k] = R[j];
        j++;
        k++;
    }

}
void mergeSort(int arr[],int leftIdx,int rightIdx){
    if(leftIdx < rightIdx) {
        int middle = (rightIdx + leftIdx) / 2;
        mergeSort(arr,leftIdx,middle);
        mergeSort(arr,middle+1,rightIdx);
        merge(arr,leftIdx,middle,rightIdx);
    }
}
void print(int arr[], int N ) {
    for(int i = 0 ; i < N; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl << "===========" <<endl;
}
int main() {
    int arr[N];
    bornRandomNumbers(N,arr);
    print(arr,N);
    mergeSort(arr,0,N-1);
    cout << "WHEN SORTTING END " << endl;
    print(arr,N);
}