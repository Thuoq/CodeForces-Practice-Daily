//https://codeforces.com/problemset/problem/1399/A

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case; // 5
    while (test_case)
    {
        int n;
        cin >> n;
        vector<int> arr; //
        for (int i = 0; i < n; i++)
        {
            int _;
            cin >> _;
            arr.push_back(_);
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if(arr.size() == 1) {
                break;
            }
            if (arr[i + 1] - arr[i] <= 1)
            {
                // cout << arr[i] << endl;
                arr.erase(arr.begin() + i);
                i = 0;
            }
            else
            {
                break;
            }
        }
        arr.size() == 1 ? cout << "YES" : cout << "NO";
        cout << endl;

        test_case--;
    }
}