#include<iostream>
using namespace std;
void printFnc(int arr[],int actualSize ) {
    int n = sizeof(arr) / sizeof(int); 

    cout << "This is in Fnc()" << n << endl; // equal to 2 because 8/4
    for(int i = 0 ; i < actualSize;  i ++) {
        cout << arr[i] << ": ";
    }
}
int main() {
    int arr[] = {1,2,3,4,5} ; // init array int = 4 byte => 20  

    int n = sizeof(arr) / sizeof(int); 

    cout << "This is in main()" << n << endl;
    printFnc(arr,n);
}