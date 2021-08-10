#include<iostream>
using namespace std;
int main() {
    int x = 10;
    float y = 14.4;
    cout << &x << endl;
    cout << &y << endl;
    
    int *xprt = &x;
    // address of pointer value of xprt;
    cout << &xprt << endl;
    
    // Pointer to pointer 
    int ** xxptr = &xprt;
    cout << xxptr << endl;
}