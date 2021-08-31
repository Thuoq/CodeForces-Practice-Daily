//https://codeforces.com/problemset/problem/1352/A
//https://codeforces.com/problemset/problem/1352/A
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int test;

    cin >> test;
    while (test)
    {
        int number;
        cin >> number;
        int amount_of_number = (int)log10((double)number) + 1;

        if (number <= 10)
        {
            cout << 1 << endl;
            cout << number;
        }
        else if (number % (int)pow(10, amount_of_number - 1) == 0)
        {
            cout << 1 << endl;
            cout << number;
        }
        else
        {
            int i = 0;
            int count = 0;
            int list[amount_of_number];

            while (number > 0)
            {
                if (number % 10 != 0)
                {
                    count++;
                }
                list[i] = number % 10;
                i++;
                number = number / 10;
            }
            cout << count << endl;
            for (int i = 0; i < amount_of_number; i++)
            {
                if (list[i] > 0)
                {
                    cout << pow(10, i) * list[i] << " ";
                }
            }
        }
        cout << endl;
        test--;
    }
}