// Link Problem : https://codeforces.com/problemset/problem/228/A
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int numbers[5];
    int ans = 3;
    for (int i = 0; i < 4; i++)
    {
        int number;
        cin >> number;
        numbers[i] = number;
    }
    sort(numbers,numbers+4);
    for (int i = 0 ; i < 3; i ++) {
        if(numbers[i] != numbers[i+1]) {
            ans --;
        }
    }
    cout << ans;
}