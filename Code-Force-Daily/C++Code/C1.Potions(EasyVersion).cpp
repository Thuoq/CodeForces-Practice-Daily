#include<bits/stdc++.h>

#define clr(x) memset(x, 0, sizeof(x));
#define fo(i, n) for(i=0;i<n;i++)
#define fo_1(i,n) for(i = 1 ; i <= n ; i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define deba_1(i,a,n) fo_1(i,n){cout << a[i] << " ";}
#define INF 999; 
#define M 1000000000 + 7;
typedef long long int ll_i;
typedef map<int,int> mp_i;
using namespace std;
class Solution {
    private:
        int n;
        int *arr;
        mp_i memo;
    public:
        Solution(int n) {
            this->n = n;
            this->arr = new int[n];
            for(int i = 0; i < n ;i ++) {
                cin >> arr[i];
            }
        }
        /** This is running solution
         * 
         */
        void run() {
            

        }
        int solution() {
          
            for(int i = 0 ;i  <this->n ; i ++) {
                
            }
        }
};
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    Solution s(n);
    s.run();

}