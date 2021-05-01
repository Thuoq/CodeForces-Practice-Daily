// Link Problem: https://replit.com/@NutCow/EvergreenCultivatedProfile#main.cpp
#include <iostream>
using namespace std;
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int n;
    cin >> n;
    int memo_prev_number;

    cin >> memo_prev_number;
    int temp = 1;
    int max_ans = 1;
    while (n - 1)
    {
        int number;
        cin >> number;

        if (number >= memo_prev_number)
        {
            temp++;
            max_ans = max(max_ans, temp);
        }
        else
        {
            temp = 1;
        }
        memo_prev_number = number;
        n--;
    }
    cout << max_ans;
}