#include<iostream>
using namespace std;
int main() {
    signed int a,b;
    cin >> a >> b;
    if(a >b ) {
        cout << b << " "  << (a-b)/2;
    }else if (a < b) {
        cout << a << " " << (b - a) / 2;
    }else {
        cout << a << " " << 0;
    }
}