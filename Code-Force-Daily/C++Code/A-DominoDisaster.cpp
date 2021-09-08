// Problem: https://codeforces.com/contest/1567/problem/A
#include <iostream>
#include<string>
using namespace std;
class Solution { 
  private:
    int n;
    string s;
  public:
    Solution(int n,string s) {
      this->n = n;
      this->s = s;
    }
    void solution() {
      string ans ="";
      for(int i = 0 ; i < this->n ; i ++){
          if(this->s[i] == 'U') {
            ans+= 'D';
          }else if (this->s[i] == 'D') {
            ans+='U';
          }else {
            ans +=s[i];
          }
      }
      cout << ans << endl;
    }
};
int main() {
  int t ;
  cin >> t;
  while(t--) {
    int n;
    cin >>n;
    string s ;
    cin >> s;
    Solution sol(n,s);
    
  }

}