// Link problem:https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2736&fbclid=IwAR3cV0KCFtAKlC_CaCUw1j4SjfiFhRBH2rBz4ZtMoCt2cKG8hPFipJtB4P0


#include<iostream>
using namespace std;
void solution(int e,int f,int c) {
    int total = e + f;
    int ans = 0;
    while(total >= c) {
        ans += total/c;
        total = total/c + total%c;
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int e,f,c;
        cin >> e >> f >> c;
        solution(e,f,c);
        
    }

}