#include<bits/stdc++.h>
using namespace std;
int main() {
    int N,M;
    cin >> N >> M;
    if(N==M) {
        cout << N + 1 << endl;
    }else {
        for(int i = min(N,M)+1 ;  i <= max(N,M) + 1 ; i ++) {
            cout << i << endl;
        }
    }
}