// https://codeforces.com/problemset/problem/1154/A
#include<iostream>

using namespace std;
int main() {
    int a[4];
    int position_max = 0;
    for(int i = 0 ; i < 4; i ++) {
        int numb; 
        cin >> numb;
        a[i]  = numb;
        if(a[i] > a[position_max]) {
            position_max = i;
        }
    }
    int x,y,z; 
    if(position_max == 0 || position_max == 3) {
        if(position_max == 0) {
            x = a[1] + a[2] - a[position_max];
            y = a[2] + a[3] - a[position_max];
            z = a[position_max] - x - y;
        }else {
            x = a[0] + a[1] - a[position_max];
            y = a[1] + a[2] - a[position_max];
            z = a[position_max] - x- y;
        }
       
    }else if (position_max == 2) {
        x = a[0] + a[1] - a[position_max];
        y = a[1] + a[3] - a[position_max];
        z = a[position_max] - x - y;
        
    }else {
        x = a[0] + a[2] - a[position_max];
        y = a[2] + a[3] - a[position_max];
        z = a[position_max] - x - y;
    }
    cout << x << " " << y << " " << z;
}