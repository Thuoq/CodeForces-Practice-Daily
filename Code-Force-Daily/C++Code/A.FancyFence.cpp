// Link problem : https://codeforces.com/problemset/problem/270/A?fbclid=IwAR34YnE8drfOd4slPd-gIraBS_r2weA-5p0pMyOzwuIic59WTURBATLnmpc
#include<iostream>
#include <cmath>
using namespace std;

bool is_integer(float k)
{
  return floor(k) == k;
}
float checkAngle(float angle) {
    return (float)360/(180-angle);
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        float angle;
        cin >> angle;
        if (is_integer(checkAngle(angle))) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
        
    }
    
}