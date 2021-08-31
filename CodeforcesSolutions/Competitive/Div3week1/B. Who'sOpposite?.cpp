#include<iostream>
using namespace std;
typedef long long ll;

void solution(ll a, ll b ,ll c) {
    int elements = abs((a-b))*2;
    int max_el = max(a,max(b,c));
    if(max_el > elements) {
        cout << -1 << endl;
    }else {
        if(c+(elements)/2 <= elements) {
            cout << c+(elements/2);
        }else {
            cout << c-(elements/2);
        }
        cout << "\n";
    }

} 
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        solution(a,b,c);
    }
    
}