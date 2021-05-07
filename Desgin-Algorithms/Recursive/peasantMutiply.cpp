#include<iostream>
#include <cmath>
using namespace std;
int peasantMultiply(int x , int y) {
    // x = 6, y =5
    // x = 3 ,y = 10 
    // x_p = 1 ,y =20
    // x_p = 0 ; y = 30
    if(x == 0) return x;
    int x_p = round((x/2)); // x_p = 3 // x_p = 1 // x_p = 0
    int y_p = y + y; // y = 10 // y = 20 // y == 30
    int prod = peasantMultiply(x_p,y_p); //
    cout << prod << endl;
    if (x % 2 == 1) {
        prod += y;
    }
    return prod;
} 
int main() {
    int x,y;
    cin >> x >>y;
    cout << peasantMultiply(x,y);
}