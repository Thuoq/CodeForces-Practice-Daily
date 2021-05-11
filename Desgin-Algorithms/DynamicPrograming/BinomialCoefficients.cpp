#include <iostream>
#define MAX 200
using namespace std;
int binomial_coefficients(int n , int k);
int main() {
    // cout << "Hello world";
    cout << binomial_coefficients(2,1);
}

int binomial_coefficients(int n, int k) {
    int i, j; // counters;
    int bc[MAX + 1][MAX + 1];
    // set vertical all the number one

    for (i = 0; i < n; i++)
    {
        bc[i][0] = 1;
    }
    // set diagonal line = 1
    for (j = 0; j < n; j++)
    {
        bc[j][j] = 1;
    }
    //1
    //1 1
    //1 x  1
    //
    for (int i = 2; i <= n; i++)
    {
        // run max just i
        for (int j = 1; j < i; j++)
        {
            bc[i][j] = bc[i - 1][j - 1] + bc[i - 1][j];
        }
    }
    return bc[n][k];
}