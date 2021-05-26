// Link problem: https://codeforces.com/problemset/problem/750/A
#include <iostream>
using namespace std;
int main()
{
    int n_problem, times;
    cin >> n_problem >> times;
    int time_start = 0;
    int time_end = 240 - times;
    int count = 0;
    for (int i = 1; i <= n_problem; i++)
    {
        if (5 * i + time_start > time_end)
        {
            break;
        }
        time_start += 5 * i;
        count++;
    }
    cout << count;
}