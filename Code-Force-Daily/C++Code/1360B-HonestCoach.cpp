//https://codeforces.com/problemset/problem/1360/B
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int _;
            cin >> _;
            arr[i] = _;
        }
        sort(arr, arr + n);
        int min = 10000;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] < min)
            {
                min = arr[i] - arr[i - 1];
            }
        }
        cout << min << endl;
        test--;
    }
}