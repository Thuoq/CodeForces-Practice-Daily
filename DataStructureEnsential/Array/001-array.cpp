#include<iostream>
using namespace std;
void print(int arr[], int n) {
    for(int i = 0 ; i < n ; i ++) {
        cout << arr[i] << ": ";
    }
}
int main() {
    int students[100] = {0}; // # init 100 element equal to 0;
    cout << "Type amount of Students :";
    int n; 
    cin >> n;
    for(int i = 1 ; i < n ; i ++ ) {
        cin >> students[i];
    }
    cout << "Print" << n << " Element" << endl;
    print(students,n);
    cout << "Print full Arrays " << endl;
    print(students,100);
}