// Link problem: https://codeforces.com/problemset/problem/1343/A
#include<iostream>
#include<cmath>
using namespace std;

void solution() {
  
    int n;
    cin >> n;
    int total_k = 0;
    for(int i = 2 ; i <= 30;i ++) {
        total_k =pow(2,i);
        if(n % (total_k-1) == 0) {
            cout << n / (total_k-1) << endl;
            break;
        } 
    }
   

}
int main() {
    int test;
    cin >> test;
    while(test) {
        solution();
        test--;
    }
}