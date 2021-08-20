// Link problem: https://codeforces.com/contest/669/problem/A
#include<iostream>
using namespace std;
typedef long long int ll_i;
int main() {
  ll_i n ; 
  cin >> n;
  if(n % 3 == 2 ) {
    n-=1;
  }
  cout << (n/3)*2  + n%3;
}