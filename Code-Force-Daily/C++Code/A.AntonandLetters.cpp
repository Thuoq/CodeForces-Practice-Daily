// Link Problem: https://codeforces.com/problemset/problem/443/A

#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    set<int, greater<int>> s1;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] != ' ' and n[i] != '{' and n[i] != '}' and n[i] != ',')
        {
            s1.insert(n[i]);
        }
    }
    cout << s1.size();
}