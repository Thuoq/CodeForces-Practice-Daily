#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map<char,int> m;

int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    cin >> s;
    m count_el;
    // This code for count ele
    for(int i = 0; i < n ; i ++) {
        count_el[s[i]] ++;
    }
    for(auto pair: count_el) {
        for(int i = 0 ;i < pair.second; i ++) {
            cout << pair.first;
        }
    }
}
