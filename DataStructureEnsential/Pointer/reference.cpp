#include<iostream>
using namespace std;
int main() {
    int x = 10;
    int &y = x; // reference val
    y++;
    cout << x << endl;
    cout << y << endl;
}