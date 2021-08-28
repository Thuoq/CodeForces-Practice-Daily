#include<bits/stdc++.h>


using namespace std;
int D,R;
int temp = 0;
void solution(int x, int y , int r) {
    double d_i = sqrt(pow(x,2)+ pow(y,2));
    if(d_i + r <= R  and d_i-r >= (R-D)) {
        temp++;
    }
    
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    cin >> R >> D;
    int t; // test
    cin >> t; // test;

    while (t--)
    {
        int x,y,r;
        cin >> x >> y >> r;
        solution(x,y,r);
    }
    cout << temp << endl;
}