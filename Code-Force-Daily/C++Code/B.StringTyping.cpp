#include <iostream>
#include<string>
using namespace std;
void solve(string s ,int n) {
  string tmp ="";
  int ans =0;
  for(int i = 0 ; i < n ;) {
    tmp+=s[i];
    // ans++;
    // cout << tmp << endl;
    if(s.compare(tmp.size(),tmp.size(),tmp)==0) {
      i+= tmp.size();
      //cout << i<< " " << ans << endl;
      ans++;
    }else {
      ans++;
      i++;
    }
  }
  cout << ans << endl;
}
int main() {
  int n;
  cin >> n;
  string s ;
  cin >> s;
  // string b;
  // cin >> b;
  // cout << s.compare(b.size(),b.size(),b) << endl;
  
  solve(s,n);
  //std::cout << "Hello World!\n";
}