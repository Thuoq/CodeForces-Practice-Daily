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

int n;
vi subset;
// n = 3
// k = 0;
// search(k=1)
// search(k=2)
void search(int k ) {
    if(k!= n+1) {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }else {
       int i;
       deba(i,subset,subset.size());
       if(check(subset)) {
          _min = min(subset.size(),min);
       }
       cout << endl;
    }
}
void solution() {
    search(1);
}
int main() {
    cin >> n; 
    search(1);
    // int i;
    

    
    

}