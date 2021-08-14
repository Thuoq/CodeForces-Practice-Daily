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
    cout << (0 & 0) << endl;
    cout << (5 | 8) << endl; 
    cout << (~0) << endl;
    cout << (~ -1) << endl;
    cout << (5 << 2) << endl; // a << b = a * 2^b
    cout << (10 >> 2) << endl; // a >> b = a/(2^b)
}