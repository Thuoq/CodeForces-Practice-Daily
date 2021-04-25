// Link problem: https://codeforces.com/problemset/problem/344/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int idx = 0;
    int count = 1;
    string last_cha;
    cin >> n;
    while (n)
    {
        string cha;
        cin >> cha;
        if (last_cha.size() > 0)
        {
            if (last_cha != cha)
            {
                count++;
            }
        }
        last_cha = cha;
        idx++;
        n--;
    }
    cout << count;
}