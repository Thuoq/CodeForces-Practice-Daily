// Link Problem: https://codeforces.com/problemset/problem/158/B
#include <iostream>
#include <map>
using namespace std;
int main() {
  int n;
  cin >> n ;
  map<char, int> stored;
  int ans = 0;
  stored['1'] = 0;
  stored['2'] = 0;
  stored['3'] = 0;
  while(n) {
    char number;
    cin >> number;
    
    if(number == '4') {
      ans ++;
    }else {
      if(stored[number]) {
        stored.at(number)++;
      }else {
        stored[number] = 1;
      }
    }
    n--;
  }

  if(stored['3'] && stored['1']) {
      int temp =0;
      if(stored['3'] >= stored['1']) {
        temp = stored['3']- stored['1'];
       
        stored['3'] = temp;
        ans += stored['1'];
        stored['1'] = 0;
    
      }else {
        temp = stored['1']- stored['3'];
        ans += stored['3'];
        stored['3'] = 0;
        stored['1'] = temp;
      }
  }
  if(stored['2'] >=2) {
    int temp = int(stored['2'] / 2);
  
    stored['2'] = stored['2'] - temp*2;
    ans += temp;
  }
  if(stored['1'] >= 4) {
    int temp = stored['1'] / 4;
    stored['1'] = stored['1'] - temp*4;
    ans += temp;
  }
  if(stored['2'] == 1 && stored['1'] >=2) {
    
    stored['2'] = 0;
    stored['1'] = stored['1'] - 2;
    ans ++;
  }
  if(stored['2'] == 1 && stored['1']==1) {
    ans +=1;
    stored['2'] = 0;
    stored['1'] = 0;
  }
  if(stored['1'] < 4 && stored['1'] > 0) {
    ans +=1;
    stored['1'] = 0;
  }

  cout << ans + stored['2'] + stored['1'] + stored['3'];
  
}