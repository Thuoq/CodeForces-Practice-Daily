#include<iostream>
using namespace std;
/**
 * if 1 left shift i 000i00 right if and operator if > 0 then position is 1 and ==0 is zero 
 * 
*/
int getIthBit(int n , int i) {
    if(n & (1 << i)) {
        return 1;
    }
    return 0;
}
void setIthBit(int &n , int i) {
    int mask = (1 << i);
    n = (n|mask);
    cout << n << endl;
}

void clearIthBit(int &n , int i) {
    int mask = ~(1 << i);
    n = (n & mask);
    cout << n << endl;
}
void updateIthBit(int &n, int i,int val) {
    clearIthBit(n,i);
    int mask = (v << i);
    n = n | mask;
    
}

int main() {
    int n = 5;
    int i; 
    cin >> i;
    // cout << getIthBit(n,i ) << endl;
    //setIthBit(n,i);
    clearIthBit(n,i);
    
    return 0;
}
