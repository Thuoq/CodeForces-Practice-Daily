// Link Problem : https://codeforces.com/problemset/problem/61/A
#include<iostream>
#include <string>
using namespace std;
int main() {
    string binary_one,binary_two;
    string kq = "";
    cin >> binary_one;
    cin >> binary_two;
    for (int i = 0; i < binary_one.length() ; i++) {
        if (binary_one[i] !=  binary_two[i]) {
            kq +="1";
        }else {
            kq +="0";
        }
    }
    cout << kq;
}