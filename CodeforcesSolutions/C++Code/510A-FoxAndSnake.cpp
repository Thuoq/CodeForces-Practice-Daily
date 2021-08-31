// Link Problem: https://codeforces.com/problemset/status?my=on
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cin >> row >> column;
    bool left_right = true;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i % 2 == 1)
            {
                if (left_right)
                {
                    if (j == column - 1)
                    {
                        cout << "#";
                        left_right = false;
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else
                {
                    if (j == 0)
                    {
                        cout << "#";
                    }
                    else if (j == column - 1)
                    {
                        left_right = true;
                        cout << ".";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << "\n";
    }
}