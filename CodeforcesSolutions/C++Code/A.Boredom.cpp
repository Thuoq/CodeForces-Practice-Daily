// Linkproblem : https://codeforces.com/problemset/problem/455/A
#include<bits/stdc++.h>
using namespace std;
#define clr(x) memset(x, 0, sizeof(x));
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
typedef long long int ll_i;
typedef map<ll_i,ll_i> mp_i;
// typedef pair<int,int> pair_i;
//     bool compare(const pair_i&a, const pair_i&b){
//             return a.second<b.second;
//         }
class Solve { 
    private: 
        ll_i n;
        ll_i *arr;
        mp_i count_ele;
    public:
        Solve(ll_i n) {
            this->n = n;
            this->arr = new ll_i[n];
        
            for(ll_i i  = 0 ; i < n ; i ++ ) {
                cin >> arr[i];
                // check exist in map
                if(this->count_ele.count(arr[i])) {
                    this->count_ele[arr[i]]++;
                }else {
                    this->count_ele[arr[i]] = 1;
                }
            }
        }
        /**
         * Nếu xoá tại điểm x thì điểm max tiếp theo chỉ có thể là x-2 vì tất cả giá trị x+1 , x-1 đã bị xoá
         * đi từ bottom -> up;
         * Xử lý cả khi nó có 3 3 3 // base case :< 
        */
        void run() {
            // for(auto el: this->count_ele) {
            //     cout<< el.first << " " << el.second <<  endl;
            // }
            // max values in map;
            // auto x = max_element(this->count_ele.begin(), this->count_ele.end(), compare);
            // because is max

            ll_i _max = count_ele.rbegin()->first;
            ll_i dp[_max];
            dp[0] = 0;
            dp[1] = count_ele[1];
            for(int i =  2 ; i<= _max ;i ++) {
                
                dp[i] = max(dp[i-1],dp[i-2] + i*count_ele[i]);
            }
            cout << dp[_max] << endl;
        }
};
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll_i n ;
    cin >> n;
    Solve sol(n);
    sol.run();

}