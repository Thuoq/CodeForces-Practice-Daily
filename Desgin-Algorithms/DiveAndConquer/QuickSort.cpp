#include<iostream>
using namespace std;
int N = 10;
void swap(int *a , int *b) {
    int t = *a;
    *a = *b;
    *b = t;
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
