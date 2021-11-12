// Linkproblem: https://open.kattis.com/problems/heartrate

#include<bits/stdc++.h>
using namespace std;
#define SETPRECISION cout << setprecision(4) << fixed;
int main() {
    int n;
    cin >> n ;
    while(n--) {
        float b,p;
        cin >> b >> p;
        float BPM = (60.0*b)/(p);
        float per = (60.0)/(p);
        SETPRECISION
        cout << BPM-per << " " << BPM << " " << BPM + per << endl;
    }
}