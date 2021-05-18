#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    unsigned short int arr[3];
    for(int i = 0 ;i  < 3; i ++) {
        unsigned short int numb;
        cin >> numb;
        arr[i] = numb;
    }
    sort(arr,arr+3);
    cout << abs(arr[1] - arr[0]) + abs(arr[1]-arr[2]) << endl;
}