// Link Problem : https://codeforces.com/problemset/problem/469/A
#include<iostream>
#include <iterator>

#include <set>
using namespace std;
int main() {
    set<int, greater<int> > s1;
    int n,p,q;
    cin >> n >> p;
    int count = 0;
    for (int i = 0 ; i < p ; i++) {
        int number;
        cin >> number;
        s1.insert(number);
    }
    cin >> q;
    for(int i = 0 ; i <q ; i++) {
        int number;
        cin >> number;
        s1.insert(number);
    }
    
    if (s1.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}