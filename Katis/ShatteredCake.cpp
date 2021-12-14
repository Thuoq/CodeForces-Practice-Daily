#include<bits/stdc++.h>
using namespace std;
typedef vector<vector<int> > v_v_i;
int main() {
    int W;
    cin >> W;
    int n ;
    cin >> n;
    //v_v_i pieces(n,vector<int>(2,0));
    int area = 0;
    for(int i = 0 ; i < n ; i ++) { 
        int w,l;
        cin >> w >> l ;
        area += (w*l);
    }
    cout << area/W << endl;
    
}