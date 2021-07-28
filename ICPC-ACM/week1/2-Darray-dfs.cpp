#include<iostream>
#include<vector>
using namespace std;
bool checkValid(vector<vector<int> > &arr,vector<vector<bool> > &visited, int row, int col) {
    if(row < 0 || col < 0 || row >=arr.size() || col >=arr[0].size() || visited[row][col]) {
        return false;
    }
    return true;
}
// int DIRECTIONS[0][0] = -1;// row
// int DIRECTIONS[0][1] = 0; // column
int DIRECTIONS[4][3] = {
    {-1,0} ,// top
    {0,1}, // right
    {1,0}, // bottom
    {0,-1} // left;
}
void dfs(vector<vector<int> > &arr,vector<vector<bool> > &visited, int row, int col) {
    // check valid row col ||  seen
    if(checkValid(arr,visited,row,col)) {
        return;
    }
    // logic ;
    // check visited;
    visited[row][col] = true;
    cout << arr[row][col] << endl;
    for(int i = 0; i < 4; i ++) {
        // calculator new col , new row
        int newCol  = col + DIRECTIONS[i][1];
        int newRow = row + DIRECTIONS[i][0];
        dfs(arr,visited,row,col);
    }
};
int main() {
    vector<vector<int>> arr;
    vector<vector<bool>> seen;
    dfs(arr,seen,0,0);
}