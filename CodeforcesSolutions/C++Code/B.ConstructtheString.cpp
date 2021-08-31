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
// void solution() {
//     int i, j, k, n, m;
// }
/* ========== YOUR CODE HERE ========= */
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t ;
    cin >> t;
    int n , a  , b;
    while (t--)
    {   
        // int n , lengthOfSub  , distinct;
        // cin >> n >> lengthOfSub >>distinct;
        // string ans(n,'a');
        // // Chạy từ 0 -> n với đk i+= a;
        // for(int i = 0 ; i < n; i+= (lengthOfSub)) {
        //     for(int k = 0; k < distinct;k++) {
        //         ans[i+k] = 'a'+k;
        //     }
        // }
        // cout << ans << endl;
 
        cin>>n>>a>>b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string s;
        for(int i=0; i<b; i++){
            s[i]=c[i];
        }
        int k=0;
        while(n--){
            cout<<s[k];
            k++;
            if(k==b)
                k=0;
        }
        cout<<endl;
        
    }
    
    return 0;
}