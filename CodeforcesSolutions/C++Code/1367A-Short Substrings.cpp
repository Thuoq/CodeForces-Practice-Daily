// Link problem: 1367A - Short Substrings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test)
    {
        string a;
        cin >> a;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (i > 0)
            {
                if (a[i] == a[i + 1])
                {
                    a.erase(a.begin() + i + 1);
                }
            }
        }
        cout << a << endl;
        test--;
    }
}