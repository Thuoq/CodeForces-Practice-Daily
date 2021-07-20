// Linkproblem: https://codeforces.com/problemset/problem/432/A
#include<iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int count =0;
    for(int i = 0 ; i <n;i++ ){
        int _;
        cin >> _;
        if(_+k <=5){
            count++;
        }
    }
    cout<< count/3 << endl;
}