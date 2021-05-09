#include<iostream>
#include<vector>
using namespace std;
int DIRECTIONS[4][3] = {
    {-1,0},
    {0,1},
    {1,0},
    {0,-1}
};
vector<vector<bool> > init_seen(vector<vector<bool> > seen, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        vector<bool> bol;
        for (int j = 0; j < column; j++)
        {
            bol.push_back(false);
        }
        seen.push_back(bol);
    }
    return seen;
}
vector<vector<int> > init_matrix(vector<vector<int> > matrix,int &row , int &column) {
    cin >> row >> column;
    for (int i = 0; i < row; i++)
    {
        vector<int> numbers ;
        for (int j = 0; j < column; j++)
        {
            int number;
            cin >> number;
            numbers.push_back(number);
        }
        matrix.push_back(numbers);
    }
    return matrix;
}
vector<int> bfs(vector<vector<int> > matrix, vector<int> &values, vector<vector<bool> > seen,int row,int column) {
    vector<vector<int> > queue;
    vector<int> val;
    val.push_back(row);
    val.push_back(column);
    queue.push_back(val);
    while(queue.size()) {
        vector<int> valRowCol = queue.front();
        queue.erase(queue.begin());
        int row = valRowCol.at(0);
        int col = valRowCol.at(1);
        if (row < 0 || col < 0 || row >= matrix.size() || col >= matrix[0].size() || seen[row][col])
        {
            continue;
        }
       
        seen[row][col] = true;
        values.push_back(matrix[row][col]);
        for(int i = 0 ; i < 4 ; i ++) {
            vector<int> direct;
           
            int nextRow = row + DIRECTIONS[i][0];
            int nextCol = col + DIRECTIONS[i][1];
            direct.push_back(nextRow);
            direct.push_back(nextCol);
            queue.push_back(direct);
        }
       
    }
    return values;
}

int main() {
    int ROW_SIZE,COL_SIZE;
    vector<vector<int> > matrix;
    vector<vector<int> > grid = init_matrix(matrix, ROW_SIZE, COL_SIZE);
    vector<vector<bool> > seen_init;
    vector<vector<bool> > seen = init_seen(seen_init, ROW_SIZE, COL_SIZE);
    vector<int> values;
    vector<int> result = bfs(grid, values, seen, 0, 0);
    for(int val : result) {
        cout << val << " ";
    }
}