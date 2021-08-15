/**
 * Problem: TRiplets 
 * Cho mảng bao gồm N interger, và 1 number N là tổng của target sum 
 * Tìm 3 số để có thể đạt được targetsum 
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define _CRT_SECURE_NO_DEPRECATE // suppress some compilation warning messages (for VC++ users)
// Shortcuts for "common" data types in contests
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vi_nest;
// typedef pair<int, int> ii;
// typedef vector<ii> vii;
// typedef set<int> si;
// typedef map<string, int> msi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

vi_nest solution(vi ip,ll S) {
    // vi standfor vector<int> || vi_nest standfor vector<vector<int> >
    // sort vi  || ll standfor long long
    sort(ip.begin(),ip.end());
    int n =  ip.size();
    vi_nest result;
    for(int i = 0 ; i < n -2  ; i++) { // run when see n-2 position
        int j= i +1; // left pointer
        int k = n-1; // 
        int currentSum = S-ip[i];
        // two pointer like BST
        while(j < k) {
            if (ip[j] + ip[k] == currentSum) {
                // push_back into result;
                result.PB({ip[i],ip[j],ip[k]});
                j++;
                k--;
            }else if (ip[j] + ip[k] > currentSum) {
                k--;
            }else {
                j++;
            }
        }
    }
    return result; 
}

int main() {
    vi ip = {1,2,3,4,5,6,7,8,9,15};
    ll S = 18;
    vi_nest arr = solution(ip,S);
  
    for(auto &x: arr) {
        for(auto &el : x) {
            cout << el << ", ";
        }
        cout << "\n";
    }
    
}