// Link Problem: https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[m];
    int i = 0;
    while (m > 0)
    {
        int number;
        cin >> number;
        arr[i] = number;
        i++;
        m--;
    }
    // 22 12 10 10 7 5
    sort(arr, arr + i, greater<int>());
    int result = arr[0];
    for (int k = 0; k < i; k++)
    {
        if (k + n > i)
        {
            break;
        }
        result = min(result, arr[k] - arr[k + n - 1]);
    }
    cout << result;
}