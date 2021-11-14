#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int _size = s.size();
    for(int i = 0 ; i < _size ; i ++) {
        if(s[i] == ':') {
            if(s[i+1] == ')') {
                cout << i << endl;
            }else if (s[i+1] == '-' and s[i+2] == ')') {
                cout << i << endl;
            }
        }
        if(s[i] == ';') {
            if(s[i+1] == ')') {
                cout << i << endl;
            }else if (s[i+1] == '-' and s[i+2] == ')') {
                cout << i << endl;
            }
        }
    }
}