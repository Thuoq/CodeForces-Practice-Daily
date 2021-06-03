// Linkproblem: https://codeforces.com/problemset/problem/1367/B

#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
bool isEven(int number)
{
    return number % 2 == 0;
}
bool isOdd(int number)
{
    return number % 2 != 0;
}
int main()
{
    int test;
    cin >> test;

    while (test)
    {
        int n;
        cin >> n;
        int arr[n];
        int count_even = 0;
        int count_odd = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int _;
            cin >> _;
            if (_ % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
            arr[i] = _;
        }
        if (isEven(n - 1) & (count_odd < count_even))
        {
            ans = -1;
        }
        else if (isOdd(n - 1) & (count_odd != count_even))
        {
            ans = -1;
        }
        else
        {
            int i = 0;
            int j = n - 1;
            while (i <= j)
            {

                if (isEven(i) && isOdd(arr[i]) && isOdd(j) && isEven(arr[j]))
                {
                    swap(arr, i, j);
                    ans++;
                }
                else if (isOdd(i) && isEven(arr[i]) && isEven(j) && isOdd(arr[j]))
                {
                    swap(arr, i, j);
                    ans++;
                }
                j--;
                i++;
            }
        }
        cout << ans << endl;

        test--;
    }
}