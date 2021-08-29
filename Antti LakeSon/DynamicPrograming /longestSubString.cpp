#include<bits/stdc++.h>
using namespace std;
// MACROS DEFINITION
#define clr(x) memset(x, 0, sizeof(x));
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define INF 999; 
#define M 1000000000 + 7;


class LongestSubString {
    private: 
        int SIZE;
        int *arr;
    public: 
        LongestSubString(int SIZE) { 
            this->SIZE = SIZE;
            this->arr = new int[SIZE];
           
        }
        void Input() {
            for(int i = 0 ; i < this->SIZE; i ++) {
                cin >> arr[i];
            }
        }    
        void twoforloop() {
            int ans = 1;
            int length[this->SIZE];
            clr(length);
            for(int k = 0 ; k < this->SIZE ; k ++) {
                length[k] = 1;
                for(int i = 0 ;  i < k ; i ++) {
                    if(this->arr[i] < this->arr[k]) {
                        length[k] = max(length[k],length[i]+1);
                    }
                }
            }
            int k;
            deba(k,length,this->SIZE);
        }
        

};
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>> n;
    LongestSubString t(n);
    t.Input();
    // SOLUTION
    t.twoforloop();
}