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
vi permutation;

void search(bool choosen[]) {
    if(permutation.size() == n) {
        int i;
        deba(i,permutation,n);
    }else {
        int i;
        fo(i,n){
            if(choosen[i]){
                continue;
            }
        
            choosen[i]  = true;
            permutation.push_back(i);
            search(choosen);
            choosen[i]= false;
            permutation.pop_back();
        }
    }
}
int main() {
    // bool choosen[n];
    // clr(choosen);
    // cin >> n;
    // search(choosen);
    // cout << choosen[0] << endl;
    // int i;
    
    vector<int> permutation;
    for (int i = 0; i < n; i++) {
        permutation.push_back(i);
    }
    do {
        int i;
        deba(i,permutation,n);
    } while (next_permutation(permutation.begin(),permutation.end()));
    
    

}