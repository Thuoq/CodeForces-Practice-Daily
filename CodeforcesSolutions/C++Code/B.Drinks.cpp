// Link Problem: https://codeforces.com/problemset/problem/200/B
#include<iostream>
using namespace std;
double sum(double numbers[], int size)
{
    double sum;
    for (int i = 0 ; i < size ; i ++) {
        sum+= numbers[i];
    }
    return sum;
}
int main () {
    double numbers[250];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++ ){ 
        double number;
        cin >> number;
        numbers[i] = number/100.0;
    }
    double total_numbers = sum(numbers,n) * 100.0;
    cout << (double)total_numbers/n;
}