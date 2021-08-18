// Problem:https://codeforces.com/problemset/problem/959/A?fbclid=IwAR0gxms49mwV4REGgNt8OlXT0EyIcyG-ildyz3lbw-0IFHyXhU9rUiJwm6U

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Mahmoud take a must have even
    // Ehab's take a must have odd
    if(n %2 == 0) {
        cout << "Mahmoud\n";
    }else {
        cout << "Ehab\n";
    }
}