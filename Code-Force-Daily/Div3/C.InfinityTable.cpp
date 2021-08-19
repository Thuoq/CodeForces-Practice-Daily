// Problem:https://codeforces.com/contest/1560/problem/C
#include<iostream>
#include<vector>
using namespace std;

void solution(int k){ // k =11
    int a = 1;
    int x = 1;
    int i = 1;

    while (k >= x + a) // 11 >= (x+a)
    {
        x += a;// x= 2 | x =5
        a += 2;// a=3  | a = 5
        i += 1;// i=2  | i = 3
    }
   
    int m = k - x + 1;
    if (m <= i)
        cout << m << ' ' << i << '\n';
    else
        cout << i << ' ' << (i - (m - i)) << '\n';
}

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solution(n);
    }
}