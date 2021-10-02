#include<bits/stdc++.h>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(x) memset(x, 0, sizeof(x));
typedef vector<int> v_i;
typedef map<int,int> mp;
v_i subset;

mp store;
bool visited[100] = {0};
int n;
int P;
int hold_max = INT_MIN;
int _min = 0;
void search(int k ) {
    if(k!= n) {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }else {
        
        int SIZE = subset.size();
        if(SIZE)  {
            int _sum_ = 0;
            // total subset
            for(auto key: subset) { 
                _sum_ += store[key];


                visited[key] = true; // set make visited;
            }
            if(_sum_ == 1000 ) { // check dive 1000
                int _sum_orthers = 0;
                // sum orthers
                // cout << "Check VIsited" << endl;
                for(auto s : store) {
                    if(!visited[s.first]) { // check not visited;
                    // cout << s.first << " " << s.second << endl;
                      _sum_orthers+= s.second;
                    }
                }
                // cout << "This is sum " <<_sum_  << " hold_max " << hold_max << "Sum orthers " <<  _sum_orthers << endl;
                if(hold_max <= _sum_/1000) {
                    hold_max = _sum_/1000;
                    _min = min(hold_max*P + _sum_orthers,_min);
                }
            }
            clr(visited); // reset visited to 0 for next recursive
        }
    }
}
void solution() {
    search(0);
    cout << _min << endl;
}
int main() {
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    FAST_IO
    cin >> n >> P;
  
    for(int i = 0 ; i < n ; i ++)   {
        int _;
        cin >> _;
        store[i] = _;
        _min+= _;
    }
    if(_min < 1000) { // check TH <= 1000 and all number can not have subset total = 1000;
        cout << _min << endl;
    }else {
        solution();
    }
}
// 3 TH 
// 1 Tổng các pt < 1000 
// 2 Tổng của tất cả các subset không có cái nào chia hết 1000
// 3 Có ít nhất 1 tập hợp có tổng là chia hết 1000