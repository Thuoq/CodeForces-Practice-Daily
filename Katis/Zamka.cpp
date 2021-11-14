#include<bits/stdc++.h>
using namespace std;
int sumDigits(int x ) {
    int res = 0;
    while(x) {  
        res += x%10;
        x = x/10;
    }
    return res;
}
int main() {
    int L,D,X;
    cin >> L >> D >> X;
    int N,M;
    for(int i = L ;i <= D;  i ++) {
        if(sumDigits(i) == X) {
            cout << i << endl;
            break;
        }
    }
    for(int i = D ;i >= L;  i --) {
        if(sumDigits(i) == X) {
            cout << i << endl;
            break;
        }
    }
}