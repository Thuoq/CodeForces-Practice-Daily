// Link Problem: https://codeforces.com/problemset/problem/677/A
#include <iostream>
using namespace std;
int main()
{
    int n, h;
    int width = 0;
    cin >> n >> h;
    while (n)
    {
        int number;
        cin >> number;
        if (number > h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
        n--;
    }
    cout << width;
}