// Link problem:https://replit.com/@LVnVn3/SingleWealthyKeygens#main.cpp
#include <iostream>
using namespace std;
typedef long long int ll_i;
int main() {
  ll_i n;
  cin >> n;
  if(n == 0) {
    cout << 1 << endl;
    return 0;
  }
  if(n%4 == 0) {
    cout << 6 << endl;
  }else if(n%4 == 1) {
    cout << 8 << endl;
  }else if (n%4 == 2) {
    cout << 4 << endl;
  }else {
    cout << 2 << endl;
  }
  
}
