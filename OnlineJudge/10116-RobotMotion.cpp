#include<bits/stdc++.h>
using namespace std;
typedef vector<int> v_i;
typedef vector<v_i> v_v_i;
typedef vector<char> v_c;
typedef vector<v_c > v_v_c;
typedef map<char,pair<int,int>> mp; 
mp directions;
void print(v_v_c m_cha,int r, int c) {
    for(int i = 0 ; i < r ; i ++) {
        for(int j = 0 ; j < c ; j ++) {
            cout << m_cha[i][j] << " ";
        }
        cout << endl;
    }
}
void solution(v_v_c m_cha, int s , int r , int c) {
    v_v_i visited(r,v_i(c,0));
    int step = 1;
    visited[0][s-1] = 1;
    int row = 0;
    int col = s-1;
    while (true) {
        // cout << "Cu" << row <<" " << col << endl;
        // cout << "========CONG===========" << endl;
        // cout << directions[m_cha[row][col]].first << " " << directions[m_cha[row][col]].second << endl;
        int _r = row;
        int _c = col;
        row = row + directions[m_cha[_r][_c]].first;
        col = col + directions[m_cha[_r][_c]].second;
        // cout << "====================" << endl;
        // cout << row <<   " " << col << endl; 
        // check exits
        if(row < 0 or col < 0 or row >= r or col >= c ) {
            cout << step << " step(s) to exit" << endl;
            return;
        }
        if(visited[row][col]) {
            cout << visited[row][col]-1 <<  " step(s) before a loop of " << step-visited[row][col]  +1 << " step(s)" << endl;
            return;
        }
        // cycle
        step++;
        visited[row][col] = step;
    }
    
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    directions['W']= {0,-1}; // left
    directions['N']= {-1,0}; // up
    directions['S']= {1,0}; // down
    directions['E']= {0,1}; // right;
    int r,c,s;
    cin >> r >> c >> s;
    while (r!= 0 and c!= 0 and s!=0)
    {
        v_v_c m_cha;
        for(int i = 0 ; i < r ; i ++) {
            v_c tmp;
            for(int j = 0 ; j < c ; j ++) {
                char _;
                cin >> _;
                tmp.push_back(_);
            }
            m_cha.push_back(tmp);
        }
        solution(m_cha,s,r,c);

        cin >> r >> c >> s;
        
    }
    
}