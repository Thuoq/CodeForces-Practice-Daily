#include <iostream>
using namespace std;
int DIRECTIONS[4][3] = {
    {-1, 0}, // UP
    {0, 1},  // RIGHT
    {1, 0},  // DOWN
    {0, -1}  // LEFT
};
int main()
{
    int h, w; // h is column , w is row
    cin >> h >> w;
    char arr[w][h];
    // INPUT
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Handle Problem
    int ans = 0;
    // Run Sequences
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            // check char is ='B'
            if (arr[i][j] == 'B')
            {
                // Run Directions  Sequences
                for (int k = 0; k < 4; k++)
                {
                    int newRow = DIRECTIONS[k][0] + i;
                    int newCol = DIRECTIONS[k][1] + j;
                    // check is Valid Row and Column;
                    if (newRow >= 0 && newCol >= 0 && newRow < w && newCol < h)
                    {
                        // Check beside is 'A'
                        if (arr[newRow][newCol] == 'A')
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans;
}