#include<bits/stdc++.h>
using namespace std;

string s;
bool isPrime(int x ) 
{
    if(x == 1) {
        return false;
    }
    if (x==2) {
        return true;
    }
    for(int i= 2 ; i <= sqrt(x); i ++){
        if(x % i == 0 ) {
            return false;
        }
    }
    return true;
}
int n ;

vector<int> subset;
void search(long long int k,bool &check ) {
      if(check) {
            return;
        }
    if(k!= n) {
        search(k+1,check);
        subset.push_back(k);
        search(k+1,check);
        subset.pop_back();
    }else {
        if(check) {
            return;
        }
        string ans ="";
        // "6"+"2"
        for(auto &el : subset) {
            if(s[el] >='0' and s[el] <= '9') {
         
                ans += s[el];
            }
            // cout << "RUn HERE " << ans << endl;
        }
        // cout << ans << endl;
        if(!isPrime(atoi(ans.c_str())) and ans.size()) {
            
            check = true;
            cout << ans.size() << endl;
            cout << ans << endl;
        }
        
        return;
        //return;
    }
}



/* ========== YOUR CODE HERE ========= */
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        bool check = false;
        cin >> n;
        string nums;
        cin >> nums;
        s = nums;
    
      
        search(0,check);
    }
    
    return 0;
}