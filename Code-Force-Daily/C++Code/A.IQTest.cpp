// Link Problem: https://codeforces.com/problemset/problem/25/A
#include <iostream>

#include<vector>
#include <tuple>
using namespace std;
int main() {
  int n;
  int temp = 1;
  cin >> n;

  vector<tuple<int,int>> odd;
  vector<tuple<int,int>> even;
  while(n) {
    int number;
    cin >> number;
    if(number % 2 == 0) {
      even.push_back(make_tuple(temp,number));
    }else {
      odd.push_back(make_tuple(temp,number));
    }
    temp++;
    n--;
  }
  if(even.size() > odd.size()) {
    cout << get<0>(odd[0]);
  }else {
    cout << get<0>(even[0]);
  }
}