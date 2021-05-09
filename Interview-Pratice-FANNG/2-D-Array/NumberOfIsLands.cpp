#include<iostream>
#include <vector>
using namespace std;
int DIRECTIONS[4][3] = {
    {-1, 0},
    {0, 1},
    {1, 0},
    {0, -1}};
class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    count++; 
                    this->bfs(grid, i, j);
                }
            }
        }
        return count;
    }
    void bfs(vector<vector<char>> &gird, int row, int col)
    {
        vector<int> col_row;
        col_row.push_back(row);
        col_row.push_back(col);
        vector<vector<int> > queue;
        queue.push_back(col_row);
        while(queue.size()) {
            vector<int> current_position = queue.front();
            queue.erase(queue.begin());
            int r = current_position.at(0);
            int c = current_position.at(1);
            if (r < 0 || c < 0 || r >= gird.size() || c >= gird[0].size())
            {
                continue;
            }
            if (gird[r][c] == '1')
            {
                gird[r][c] = '0';
                for(int i = 0 ; i < 4 ; i ++) {
                    int next_row = r + DIRECTIONS[i][0];
                    int next_col = c + DIRECTIONS[i][1];
                    vector<int> temp;
                    temp.push_back(next_row);
                    temp.push_back(next_col);
                    queue.push_back(temp);  
                }
            }
        }
    }
    
};