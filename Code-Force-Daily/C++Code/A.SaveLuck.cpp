#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int width,L,v1,v2;
  cin>> width >> L >> v1 >> v2;
  int totalV = v1 + v2;
  int truthL = L -width;
  float ans = (float)truthL/totalV;
  cout << setprecision(7) << fixed << ans <<  endl;
}
