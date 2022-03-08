#include<iostream>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a == b) {
            if (c % 2 == 0) {
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }else if (b == c) {
            if (a % 2 == 0) {
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }            
        }else if (c == a) {
            if (b % 2 == 0) {
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }else {
            int _max = max(a,max(b,c));
            if(_max == b) {
                if (a + c == _max) {
                    cout << "Yes" << endl;
                }else {
                    cout << "No" << endl;
                }
            }else if (_max == c) {
                if (b+a == _max) {
                    cout << "Yes" << endl;
                }else {
                    cout << "No" << endl;
                }
            }else {
                if (b + c == _max) {
                    cout << "Yes" << endl;
                }else {
                    cout << "No" << endl;
                }
            }
        }
    }

}