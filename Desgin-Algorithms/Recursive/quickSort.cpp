#include <iostream>
#include <time.h>
#include <cmath>
#define N 1000
using namespace std;
int arr[N];
void random_int_number(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int numb = rand() % 10 + 1;
        arr[i] = numb;
    }
}
int* quickSort(int arr[],int n) {
    if(n > 1) {
        int pivotIdx = n-1;
        int pivot = arr[pivotIdx];
        int leftNumb[N];
        int rightNumb[N];
        for(int i = 0 ; i < N ; i ++) {
            int currentNum = arr[i];
            if(currentNum < pivot) {
                
            }
        }

    }
    return arr;
}
int main() {
    srand(time(NULL));
    random_int_number(arr, N);
    quickSort(arr,N);

    // Display
    for(int i = 0 ; i < N ; i ++) {
        cout << arr[i] << " ";
    }
}