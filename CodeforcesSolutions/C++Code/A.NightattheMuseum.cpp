// Problem: https://codeforces.com/problemset/problem/731/A?fbclid=IwAR0Ad0Uru-ql4VOHVuPmbC90u-JpdIymQwWQRcsdNnBKAqn8mb_pHfzDjfY
#include<iostream>
#include<string>
using namespace std;
int main() {
    string ip;
    getline(cin,ip);
    int sum = min(26-abs('a'-ip[0]),abs('a'-ip[0]));
    for(int i = 1 ; i<ip.size() ; i ++) {
        sum+= min(26-abs(ip[i-1]-ip[i]),abs(ip[i-1]-ip[i]));
    }
    cout << sum << endl;
 
   
}