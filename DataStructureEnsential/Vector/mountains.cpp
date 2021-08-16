/**
 * Problem: MOUNTAINS 
 * Cho mảng bao gồm N interger, tìm cái núi có độ dài dài nhất 
 * 3 number 
*/
#include<iostream>
// #include<algorithm>
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
int max(int a, int b) {
    return a > b ? a : b;
}
ll solution(vi arr) {
    ll ans = 0;
    ll n = arr.size();
    for(int i = 1 ; i  < n -1;) {
        // check is peek or not 
        if(arr[i-1]<arr[i] and arr[i] > arr[i+1]) {
            int cnt = 1;
            // calculator 
            int j = i; // backwards;
            while(j >=1 and arr[j] > arr[j-1] ) {
                cnt++;
                j--;
            }
            // forwards;
            while(i <= n-2 and arr[i] > arr[i+1]) {
                i++;
                cnt ++;
            }
            ans = max(cnt,ans);
        }else {
            i++;
        }
    }
    return ans;
}
int main() {
    vi arr = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    cout << solution(arr) << endl;
}