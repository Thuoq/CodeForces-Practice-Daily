#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int x ) {
    if (x == 1 ) return false;
    for(int i = 2 ; i  <= sqrt(x) ; i ++  ) {
        if(x % 2 == 0) {
            return false;
        }
    }
    return true;
}
int main() {

}