#include<iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#define N 10000
using namespace std;
int arr[N];
void random_int_number(int[],int );
void merge_sort(int [],int );
void merge(int [],int);
int main() {
    srand(time(NULL));
    random_int_number(arr,N);
     
    
}
void random_int_number( int arr[],int n) {
    for (int i = 0 ; i < n ; i ++) {
        int numb = rand() % 10 + 1;
        arr[i] = numb;
    }
}
// void merge_sort(int arr,int n) {
//     if (n > 1) {
//         int m
//     } 
// }