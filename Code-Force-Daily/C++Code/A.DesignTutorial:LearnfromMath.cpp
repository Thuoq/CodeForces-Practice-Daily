// Linkproblem: https://codeforces.com/problemset/problem/472/A
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
int main() {
    int number;
    cin >> number;
    int x = 4;
    for(int i = number-x ; i > x  ; i --, x++){
        if(!isPrime(i) && !isPrime(x)) {
            cout << i << " " << x << endl;
            break;
        }   
    }
}