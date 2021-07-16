// Link problem; https://codeforces.com/problemset/problem/1343/B

#include<iostream>
using namespace std;
void solution() {
    int n ;
    cin >> n;
    if( (n/2)%2 ) {
        cout << "NO" << endl;
    }else {
        for(int i = 2 ; i <= n/2 ; i+=2) {
            cout << n-i << " " << n+i << " ";
        }
        for(int i = 1 ; i < n/2 ; i +=2) {
            cout << n-i << " " << n+i;
        }
        cout << "\n";
    } 
}
int main() {
    int test;
    cin >> test;
    while(test) {
        solution();
        test--;
    }
}