#include <iostream>
#include <vector>
using namespace std;
int DIRECTIONS[4][3] = {
    {-1, 0},
    {0, 1},
    {1, 0},
    {0, -1}};
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
vector<vector<int> > init_matrix(vector<vector<int> > matrix, int &row, int &column)
{
    cin >> row >> column;
    for (int i = 0; i < row; i++)
    {
        vector<int> numbers;
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
void dfs(vector<vector<int> > matrix, vector<vector<bool> > &seen, vector<int> &value, int row , int column) {

    if(row < 0 || column < 0 || row >= matrix.size() || column >= matrix[0].size() || seen[row][column]) {
        return;
    }
    seen[row][column] = true;
    value.push_back(matrix[row][column]);
    for(int i = 0 ; i < 4; i ++) {
        int next_row = row + DIRECTIONS[i][0];
        int next_col = column + DIRECTIONS[i][1];
        dfs(matrix,seen,value,next_row,next_col);
    }
}

int main()
{
    int ROW_SIZE, COL_SIZE;
    vector<vector<int> > matrix;
    vector<vector<int> > grid = init_matrix(matrix, ROW_SIZE, COL_SIZE);
    vector<vector<bool> > seen_init;
    vector<vector<bool> > seen = init_seen(seen_init, ROW_SIZE, COL_SIZE);
    vector<int> values;
    cout << "SIZE MATRIX 1 " << values.size() << endl;
    dfs(grid, seen, values, 0, 0);
    cout << "SIZE MATRIX 2 " << values.size() << endl;
    for (int val : values) {
        cout << val << " ";
    }
}