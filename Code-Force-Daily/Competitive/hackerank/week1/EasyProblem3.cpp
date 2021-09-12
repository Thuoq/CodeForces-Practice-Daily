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
bool checkRetangle(int a, int b, int c) {
    if(a+b > c and a + c > b and  b +c > a ){
        return true;
    }
    return false;
}
bool runningFor(int A[]) {
     for(int i = 1 ; i<= 6; i ++) {
        for(int j = i+1 ; j <= 6; j ++) {
            for(int k = j+1 ;k <= 6 ;  k++) {
                if(!checkRetangle(A[i],A[j],A[k])) {
                    return false;
                }   
            }
        }
    }
    return true;
}
void solution(int A[]){
    runningFor(A) ? cout << "YES\n" : cout << "NO\n" ;
  
}
/* ========== YOUR CODE HERE ========= */
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        int A[7];
        for(int i = 1; i <=6 ; i++) {
            cin >> A[i];
        } 
    
        solution(A);
    }
    // SETPRECISION(20);    
    // cout << PI << endl;
    return 0;
}