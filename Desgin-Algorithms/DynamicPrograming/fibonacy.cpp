#include<iostream>
#define N 1000
using namespace std;

// Fibonacci:  0 1 1 2 3 5 8 13 21 34 55 89 144
int fibonacci_r(int n); // Time is 2^n
int fibonacci_c_driver(int n); // time is O(n) space: O(n)
int fibonacci_c(int n);
int fibonacci_dp(int n );
int fibonacci_utilmate(int n );
int memo[N + 1] = {[2 ... N] = -1};
int main() {
    // Tìm Fibonacci thứ b
    // Fibonacci nothing recursive
    // cout << fibonacci_r(5) << endl;

    // =====================
    // Fibonacci by caching
    // INIT BY -1 value memo by -1
    // cout << fibonacci_c_driver(10);

    // Fibonacci by BOTTOM UP
    //cout << fibonacci_dp(10);
    // FIbonacci Ultimate
    cout << fibonacci_utilmate(10);
}
int fibonacci_r(int n) {
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci_r(n - 1) + fibonacci_r(n - 2);
}
int fibonacci_c_driver(int n ) {
    memo[0] = 0;
    memo[1] = 1;
   
    return  fibonacci_c(n);
}
int fibonacci_c(int n) {
    if(memo[n] == -1) {
        memo[n] = fibonacci_c(n-1) + fibonacci_c(n-2);
    }
    return memo[n];
}
int fibonacci_dp(int n) {
    int memorization[N+1];
    memorization[0]= 0;
    memorization[1] = 1;
    for (int i = 2 ; i <= n ; i ++) {
        memorization[i] = memorization[i-2] + memorization[i-1];

    }
    return memorization[n];
}
int fibonacci_utilmate(int n ) {
    int temp;
    int f0 = 0;
    int f1 = 1;
    if (n === 0) return 0;
    for (int i =  2 ; i <=n ; i ++) {
        temp = f1;
        f1 = f0 + f1;
        f0 = temp;
    }
    return f1;
}