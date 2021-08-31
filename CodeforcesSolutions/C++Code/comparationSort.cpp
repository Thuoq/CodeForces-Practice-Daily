
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int SIZE) {
    for(int i = 0 ;i < SIZE; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int arr[], int s, int e) {
    int mid = (s+e)/2;
    int i = s;
    int j = mid+ 1;
    vector <int> tmp;
    while (i <= mid && j <= e ) 
    {
        if(arr[i] < arr[j]) {
            tmp.push_back(arr[i]);
            i++;
        }else {
            tmp.push_back(arr[j]);
            j++;
        }
    }
    // check exist
    while (i <= mid)
    {
        tmp.push_back(arr[i++]);
        /* code */
    }
    while (j <= e)
    {
         tmp.push_back(arr[j++]);
    }
    int k = 0;
    for(int idx = s ; idx <= e ; idx ++) {
        arr[idx] = tmp[k++];
    }
}
void mergeSort(int arr[], int s , int e) {
    if (s < e ) {
        int mid = (s+e) /2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        return merge(arr,s,e);
    }
}
int partition(int arr[],int s, int e) {
    int j = s-1;
    int pivotIdx = e;
    for(int i = s; i <=e ; i ++) {
        if(arr[i] < arr[pivotIdx]) {
            j++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[pivotIdx],arr[j+1]);
    return j+1;
}
void quickSort(int arr[] , int s, int e ){
    if(s < e ) {
        int pivotIdx = partition(arr,s,e);
        quickSort(arr,s,pivotIdx-1);
        quickSort(arr,pivotIdx+1,e);
    }
}
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
int main() {
    clock_t start = clock();
    int N = 1000000;
    int arr[N];
    bornRandomNumbers(N,arr);
    //int SIZE = sizeof(arr)/sizeof(int);
    mergeSort(arr,0,N-1);
    // cout << SIZE << endl;
    //print(arr,SIZE);
    cout.precision(10);
    cout << fixed << float(clock() -start)/CLOCKS_PER_SEC << endl;
    clock_t start2 = clock();
    int arr2[N];
    bornRandomNumbers(N,arr2);
    quickSort(arr2,0,N-1);
    cout.precision(10);
    cout << fixed << float(clock() -start2)/CLOCKS_PER_SEC << endl;
}