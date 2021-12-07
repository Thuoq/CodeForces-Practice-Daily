#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n ;
    int A[n];
    for(int i = 0 ;i < n ; i ++) {
        cin >> A[i];
    }
    string s;
    cin >> s;
    bool flag = false;
    for(int i = 0 ;i < s.size() ; i ++) {
        if(flag) {
            cout << 0 << endl;
        }else {
            long long int sum_2 =0;
            if(s[i] == '0') {
                for(auto &el : A ) {
                    if(el % 2 == 0) {
                        el /= 2;
                    }
                }
            }else {
                // ler
                
            }
            for(auto el : A) 
            {
                sum_2 +=el;
            }
            if(sum_2 == 0) {
                flag = true;
            }
            cout << sum_2 << endl;
        } 
    }
    // 10^5 /2 /2 /2  log(N)
    
}