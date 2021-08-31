// Link problem : https://codeforces.com/problemset/problem/405/A
#include <iostream>
#include <algorithm>
using namespace std;
void showArr(int [],int );
int main() {
    int n;
    cin >> n;
    int numbers[n+1];
    for (int i = 0; i < n; i++)
    {
        int number ;
        cin >> number;
        numbers[i] = number;
    }
    sort(numbers, numbers + n);
    showArr(numbers,n);
}
void showArr(int numbers[], int size) {
    for (int i = 0 ; i< size;i++) {
        cout << numbers[i] << " ";
    } 
}