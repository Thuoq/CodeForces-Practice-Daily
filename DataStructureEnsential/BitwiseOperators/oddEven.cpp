#include<iostream>
using namespace std;
/** BINARY OPERATORS TRUE LOGIC
 *  AND: & 
 *  OR: |
 *  XOR: ^:XOR standfor Exclusive OR
 *  NOT: ~
 *  LEFTSHIFT: <<
 *  RIGHTSHIFT: >> 
*/
int main() {
    // bitwise operator
    // check if last bit
    int x; 
    cin >> x;
    if(x & 1) {
        cout << "Odd Values" << endl;
    }else {
        cout << "Even Values" << endl;
    }
}