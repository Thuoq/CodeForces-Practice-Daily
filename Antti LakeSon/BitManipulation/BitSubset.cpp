#include<bits/stdc++.h>
using namespace std;

int main() {
    // int n;
    // cin >> n;
    // int k =3;
    // for (int b = 0; b < (1<<n); b++) {
    //     if (__builtin_popcount(b) == k) {
    //          cout << b << endl;
            
    //     }
    // }
    int x =5;
    int b = 0;
    do {
        cout << b << endl;
    // process subset b
    } while (b=(b-x)&x);
}