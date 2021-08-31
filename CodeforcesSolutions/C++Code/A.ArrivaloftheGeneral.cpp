// Link Problem :https://codeforces.com/problemset/problem/144/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max_pos = 0;
    int min_pos = 0;
    int max = 0;
    int min = 1000;
    for (int i = 0; i < n; i++)
    {
        int _;
        cin >> _;
        arr[i] = _;
        if (arr[i] >= max)
        {
            if (max != arr[i])
            {
                max_pos = i;
            }
            max = arr[i];
        }
        if (arr[i] <= min)
        {
            if (i > min_pos)
            {
                min_pos = i;
            }
            min = arr[i];
        }
    }
    if (min_pos < max_pos)
    {
        cout << max_pos + (n - 1 - min_pos) - 1 << endl;
    }
    else
    {
        cout << max_pos + (n - 1 - min_pos) << endl;
    }
}