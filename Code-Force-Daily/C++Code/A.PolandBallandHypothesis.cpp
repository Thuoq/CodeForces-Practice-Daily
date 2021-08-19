// Link Problem: https://codeforces.com/problemset/problem/755/A?fbclid=IwAR1y7ZtZG1a1HA2Zj3oEJpfyPRX6UoVRn1-Zm5rH8FrwUNfhiMUOHzJ-pQQ

#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int x ) 
{
    for(int i= 2 ; i <= sqrt(x); i ++){
        if(x % i == 0 ) {
            return false;
        }
    }
    return true;
}
void solution(int n ) {
    for(int i =1 ; i <= 1000 ; i ++) {
        if(!isPrime(n*i + 1)) {
            cout << i << endl;
            return;
        }
    }

}
int main() {
    int n;
    cin >> n;
    solution(n);
}