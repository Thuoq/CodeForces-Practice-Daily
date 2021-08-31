// Link Problem: https://codeforces.com/problemset/problem/4/C
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
bool check_existing(vector<tuple<string, int>> accounts, string element)
{
    for (int i = 0; i < accounts.size(); i++)
    {
        if (get<0>(accounts[i]) == element)
        {
            get<1>(accounts[i]) += 1;
            return get<1>(accounts[i]);
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<tuple<string, int>> accounts;
    while (n)
    {
        string account;
        cin >> account;
        int idx_existing = check_existing(accounts, account);
        if (idx_existing)
        {
            cout << account << idx_existing << endl;
        }
        else
        {
            cout << "OK" << endl;
            accounts.push_back(make_tuple(account, 0));
        }
        n--;
    }
}