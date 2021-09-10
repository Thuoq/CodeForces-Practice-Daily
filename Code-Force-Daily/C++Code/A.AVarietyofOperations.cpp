#include<iostream>

using namespace std;
// bool ope(int &a,int &b, int &c, int &d,int k,int typeNum) {
//     switch (typeNum)
//     {
//         case 1:
//             a += k;
//             b += k;
//             break;
//         case 2:
//             a+=k;
//             b-=k;
//             break;
//         default:
//             a-=k;
//             b+=k;
//     }       
//     return a == c and b == d;
// }
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int a=0,b=0;
        int c,d;
        cin >> c >> d;
        if(c == 0 and d == 0) {
            cout << 0 << endl;
        }else if (c == d) {
            cout << 1 << endl;
        }else if ((c+d) %2 != 0) {
            cout << -1 << endl;
        }else {
            cout << 2 << endl;
        }

        // 6
        // 1 2
        // 3 5 | 
        // 5 3
        // 6 6
        // 8 0  
        // 0 0

        // -1
        // 2
        // 2
        // 1
        // 2
        // 0


    }
}