// Link Problem: https://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;

    cin >> s >> n;
    vector<tuple<int, int>> dragons;

    while (n)
    {
        int x, y;
        cin >> x >> y;
        dragons.push_back(make_tuple(x, y));
        n--;
    }
    sort(dragons.begin(), dragons.end());
    int count_times = 0;
    bool is_check = true;
    while (count_times < dragons.size())
    {
        int x = get<0>(dragons[count_times]);
        int y = get<1>(dragons[count_times]);
        if (s > x)
        {
            s += y;
        }
        else
        {
            is_check = false;
            break;
        }
        count_times++;
    }
    is_check ? cout << "YES" : cout << "NO";
}