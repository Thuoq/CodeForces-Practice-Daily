#include<bits/stdc++.h>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(x) memset(x, 0, sizeof(x));
typedef vector<int> v_i;
v_i subset;
v_i kgs;
bool visited[100] = {0};
int n;
int P;
int _min = 0;
int mark = 0;
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
            int tmp = 0;
            v_i idx_visited;
            for(auto idx: subset) {
                if(!visited[idx]) {
                    tmp += kgs[idx];
                    idx_visited.push_back(idx);
                    if(tmp >= 1000) {
                        if(tmp == 1000) {
                            mark+=P;
                            for(auto _ : idx_visited) {
                                visited[_] = true;
                            }
                        }
                        tmp = 0;
                        idx_visited.clear();
                    } 
                }
            }
            // mark += tmp;
            // _min  = min(mi,mark);
           
        }
    }
}
void solution() {
    search(0);
    int ans = mark;
    for(int i = 0 ; i < kgs.size() ; i ++) {
        if(!visited[i]) {
            ans += kgs[i];
        }
    }
    cout << ans << endl;
}
int main() {
    
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    FAST_IO
    cin >> n >> P;
  
    for(int i = 0 ; i < n ; i ++)   {
        int _;
        cin >> _;
        kgs.push_back(_);
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