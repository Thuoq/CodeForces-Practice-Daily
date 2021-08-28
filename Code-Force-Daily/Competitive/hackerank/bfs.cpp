#include<iostream>
#include<vector>
#include<queue>

using namespace std;
typedef vector<int> vi;
typedef vector<vi> vi_vi;
typedef long long ll;
int DIRECTIONS[4][3] = {
    {-1,0},
    {0,1},
    {1,0},
    {0,-1}
};
int N;
void bfs(vi_vi matrix , ll w, ll h, vi_vi seen,ll &temp) {
    vector<vector<int> > queue;
    
    vector<int> val;
    val.push_back(0);
    val.push_back(0);
    queue.push_back(val);
    while(temp < N ) {
        vector<int> valRowCol = queue.front();
        queue.erase(queue.begin());
        int row = valRowCol.at(0);
        int col = valRowCol.at(1);
    
        // check condition 
      
        seen[row][col] = true;
        values.push_back(matrix[row][col]);
        for(int i = 0 ; i < 4 ; i ++) {
            vector<int> direct;
           
            int nextRow = row + DIRECTIONS[i][0];
            int nextCol = col + DIRECTIONS[i][1];
            if (row < 0 || col < 0 || seen[row][col])
            {
                continue;
            }
            
            direct.push_back(nextRow);
            direct.push_back(nextCol);
            queue.push_back(direct);
        }
       
    }
}

int main() {
    ll w, h;
    cin >> w >> h >> N;
    vi a(N,0)
    vi_vi gird(N,a);
    vi_vi seen(N,a);
    ll temp = 0;
    

}