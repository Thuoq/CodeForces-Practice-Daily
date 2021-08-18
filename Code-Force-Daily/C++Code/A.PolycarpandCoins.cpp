// Problem:https://codeforces.com/problemset/problem/1551/A?fbclid=IwAR006eagNTTbowPhg0zXHhIUsDDhdYmxLiFs2rBlvs7_cUYT3Y0L7aHA8LI
#include<iostream>
using namespace std;
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x =  n /3; // c1
        int y  = (n-x)/2; // c2;
        
        if(x + 2*y == n ) {
            cout << x <<" " <<y;
        }else {
            cout << x +1 << " "<<y;
        }
        cout << "\n";
    }
}