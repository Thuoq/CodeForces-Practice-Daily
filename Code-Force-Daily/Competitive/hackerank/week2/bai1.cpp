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
typedef long long int ll_i;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;




/* ========== YOUR CODE HERE ========= */
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n ;
        cin >> n;

        int a[n];
        for(int i = 0 ;i < n ;i ++) {
            cin >> a[i];
        }
        cout << "YES" << endl;
    }

 
    return 0;
}