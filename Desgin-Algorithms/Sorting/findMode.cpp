#include <iostream>
#include <map>
using namespace std;
int main()
{
    int a[8] = {6, 3, 9, 6, 6, 5, 9, 3};
    map<int, int> hash;
    int max = 0;
    int num = 0;
    for (int i = 0; i < 8; i++)
    {

        if (hash[a[i]] == 0)
        {
            hash[a[i]] = 1;
        }
        else
        {
            hash.at(a[i])++;
            if (max < hash.at(a[i]))
            {
                max = hash.at(a[i]);
                num = a[i];
            }
        }
    }
    for (auto &x : hash)
    {
        cout << x.first << ": " << x.second << '\n';
    }

    cout << "=================";
    cout << num << endl;

    //std::cout << "Hello World!\n";
}