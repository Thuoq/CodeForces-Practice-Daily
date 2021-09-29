#include<bits/stdc++.h>
using namespace std;
typedef vector<int> v_i;
typedef vector<v_i> v_v_i;
int MIN  = INT_MAX;
int N,M;
v_i subset;
bool isEven(int i)
{
    return i % 2  == 0;
}
bool check(v_i subset,v_v_i matrix) {
    v_i ans(M,0);
    for(auto &idx : subset) { 
        for(int i = 0 ; i < matrix[idx].size() ; i ++) {
            ans[i] += matrix[idx][i];
        }       
    }
    return count_if(ans.begin(), ans.end(),isEven); // return 0 => full odd 
}
void search(int k,v_v_i matrix ) {
    if(subset.size() > MIN) {
        return;
    }
    if(k!= N) {
        search(k+1,matrix);
        subset.push_back(k);
        search(k+1,matrix);
        subset.pop_back();
    }else {
        if(subset.size()) {
            if(!check(subset,matrix) ) {
                int _ = subset.size();
                MIN = min(MIN,_);
            }
        }
    }
}
void solution(v_v_i matrix ) {
    search(0,matrix);
    if(MIN == INT_MAX) {
        cout << -1 << endl;
    }else {
        cout << MIN << endl;
    }
}
void print(v_v_i matrix) {
    for(int i = 0 ; i < matrix.size() ; i ++) {
        for(int j = 0 ; j < matrix[i].size(); j ++) {
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
   
    cin >> N >> M;
    v_i _(M,0);
    v_v_i matrix(N,_); // row
    for(int i = 0 ; i < N ; i ++) {
        int _;
        cin >> _;
        for(int j = 0 ; j < _ ;  j ++) {
            int tmp ;
            cin >> tmp;
            matrix[i][tmp-1]++;
        }
    }
    solution(matrix);
    
}