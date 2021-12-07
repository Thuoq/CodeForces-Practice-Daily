#include<bits/stdc++.h>
using namespace std;
typedef vector<int> v_i;
typedef vector<string> v_v_s;
typedef vector<v_i> v_v_i;
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int r,c;
    cin >> r >> c;
    v_v_i centers;
    v_v_s matrix;
    for(int i = 0 ;i < r; i ++) {
        string s;
        cin >> s;
        matrix.push_back(s);
    }
    for(int i = 1 ;i < r-1; i ++) {
        for(int j  = 1 ; j < c-1; j ++) {
            // find center;
            if(matrix[i][j] == '1') {
                if(matrix[i-1][j] == '1' and matrix[i][j-1] == '1' and matrix[i][j+1] == '1' and matrix[i+1][j] == '1' ) { // 4 chieu
                        centers.push_back({i,j});
                    }
                
            }
        }
    }
    // if not center print -1
    //cout << centers.size() << endl;
    if(centers.size()) {
        int length_min = 0;
        // run center;
        v_i pos;
        for(auto el : centers) { //[[row,col],[row1,col2]] // centers;
            // run left
            int k_left = 0;
            for(int i = el[0]-1 ; i >= 0 ; i --) {
                if(matrix[i][el[1]] == '1') {
                    k_left++;
                }
            }
            int k_right = 0;
            for(int i = el[0]+1 ; i < c ; i ++) {
                if(matrix[i][el[1]] == '1') {
                    k_right++;
                }
            }
            int k_bottom = 0;
            for(int i = el[1]+1 ; i >=0 ; i --) {
                if(matrix[el[0]][i] == '1') {
                    k_bottom++;
                }
            }
            int k_top = 0;
            for(int i = el[1]-1 ; i < r ; i ++) {
                if(matrix[el[0]][i] == '1') {
                    k_top++;
                }
            }
            int k_min = min({k_left,k_right,k_bottom,k_top});
            if(4*k_min +1 > length_min) {
                length_min = 4*k_min +1;
                pos.push_back(el[0]);
                pos.push_back(el[1]);
            }
        }
        cout << length_min << endl;
        cout << pos[pos.size()- 2] +1 << " " << pos[pos.size() - 1]+1 << endl;
    }else {
        cout << -1 << endl;
    }
}