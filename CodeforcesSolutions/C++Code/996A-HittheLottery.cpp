#include <iostream>
using namespace std;
void subtract(int &n, int number, int &count)
{
    while (n >= number)
    {
        n = n - number;
        count++;
    }
}
int main()
{
    int n;
    int temp = 0;
    cin >> n;
    //1 , 5, 10, 20, 100.
    subtract(n, 100, temp);
    subtract(n, 20, temp);
    subtract(n, 10, temp);
    subtract(n, 5, temp);
    subtract(n, 1, temp);
    cout << temp;
}