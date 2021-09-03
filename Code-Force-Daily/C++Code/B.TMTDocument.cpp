#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
        int n;
        string s ;
    public:
        Solution(int n , string _) {
        this->n =  n;
        this->s = _;
    } 
    void solution() {
        // Count 
        int T = 0;
        int M = 0;
        for(int i = 0 ;i < this->n ; i ++) {
            if(this->s[i] == 'T') {
                T++;
            }
            if(this->s[i] == 'M') {
                M++;
            }
        }
        // check T AND M 
        if(T != 2*M) {
            cout << "NO" << endl;
        }else {
            // run for dau 
            int T_f = 0;
            int M_f = 0;
            int i = 0;
            // count M and T first
            while(i < this->n) {
                if(s[i] == 'T') {
                    T_f ++;
                }
                if(s[i] == 'M') {
                    break;
                }
                i++;
            }
            while(i < this->n) {
                if(s[i] == 'M') {
                    M_f++;
                }
                if(s[i] == 'T') {
                    break;
                }
                i++;
            }

            // check 
            if(T_f < M_f) {
                cout << "NO" << endl;
            }else {
                int T_s = 0;
                int M_s = 0;
                int j = n-1;
                while(j >= 0) {
                    if (s[j] == 'T') {
                        T_s ++;
                    }
                    if(s[j] == 'M') {
                        break;
                    }
                    j--;
                }
                while(j >= 0) {
                    if (s[j] == 'M') {
                        M_s ++;
                    }
                    if(s[j] == 'T') {
                        break;
                    }
                    j--;
                }
                if(T_s < M_s) {
                    cout << "NO" << endl;
                    return;
                }
                cout << "YES" << endl;
            }
            
        }
    }  
};
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        Solution p(n,s);
        p.solution();
       
    }
}