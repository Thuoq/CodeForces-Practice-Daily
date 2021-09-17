// LInk problem: https://codeforces.com/problemset/problem/1566/B?fbclid=IwAR3JINIJ8QnGripsxw0Rzu9sXITbCFcRQXB8F85jdAsLTwMUxv4dYlZ8Fog
#include<bits/stdc++.h>

using namespace std;
// void solution(string binary_string, int cnt_0,int cnt_1) {
//     // full 1
//     if(cnt_0 ==0 ) {
//         cout << 0 << endl;
//         return;
//     }
//     // full 0
//     if(cnt_1 == 0 or cnt_0 == 1) {
//         cout << 1 << endl;
//         return;
//     } 
//     int _cnt = 0;
//     for(int i = 1; i < binary_string.size() ; i ++ ) {
//         if(binary_string[i] != binary_string[i-1]) {
//             _cnt++;
//         }
//         if(_cnt>= 2) {
//             cout << 2 << endl;
//             return;
//         }
//     }
//     cout << _cnt << endl;
// }
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t; 
    while(t--) {

        string binary_string;
        cin >> binary_string;
        // cout << binary_string.size() << endl;

        int cnt_0 = 0;
        bool flag = false;
        int n = binary_string.size();
        for(int i  = 0 ; i < n;i++) {
            // find the culters '0'
            if(binary_string[i] == '0') {
                flag = true;
            
            }
            if((binary_string[i]=='1' or i+1 ==n) and flag  ) {
                flag = false;
                cnt_0 ++;
            }
        }
        if(cnt_0 >=2) {
            cout << 2 << endl;
        }else {
            cout << cnt_0 << endl;
        }
        
    }
}