#include<bits/stdc++.h>
using namespace std;
int main() {
    int K = INT_MAX;
    int count = 0;
    for(int i = 0 ; i < K ; K /=2) {
        count ++;        
    }
    cout << count << endl;
}