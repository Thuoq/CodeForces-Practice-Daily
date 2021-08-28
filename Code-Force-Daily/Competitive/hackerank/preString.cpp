#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 2 * acos (0.0) 
#define SETPRECISION cout << setprecision(20) << fixed;
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;



// const int N = 3e5;
// vi v[N];
// int a[N];
/* ========== YOUR CODE HERE ========= */
// void solution(ll n , ll k ){
    
// }
/* ========== YOUR CODE HERE ========= */
int main() {

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char ,int> stored;
    for(int i = 0 ; i < s.size() ; i ++) {
        stored[s[i]] = i;
    }   
    // arrayhead // 
    /**
     * y = 4;
     */

    ll t;
    cout << stored['y'] << endl;
    cin >> t;
    while(t--) {
        string k;
        cin >> k;
        ll _max = 0;
        // arya
        for(int i  =0 ; i < k.size() ; i ++) {
                cout << stored[k[i]] << endl; 
            if(stored[k[i]] >=  _max) {
                _max = stored[k[i]];
            }
        }  
        cout << _max + 1 << endl;
    }
    // SETPRECISION(20);    
    // cout << PI << endl;
    return 0;
}