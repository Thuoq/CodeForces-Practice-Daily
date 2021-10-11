#include <bits/stdc++.h>
using namespace std;

long long int mod = 1000000007;

long long int arr[32];

void input(int n){
  arr[0] = 1;
  for(int i = 1; i <= 31; i++)
    arr[i] = (arr[i - 1] * n) % mod;
}

int main(){
    // freopen("intput.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int test;
	cin >> test;
	while(test--){
		long long int n,k;
		cin >> n >> k;
		input(n);
        string s = bitset<32>(k).to_string();
        // cout << s << endl;
        long long int ans = 0;
        for (int i = 31; i >= 0; i--)
            if (s[i] == '1'){
                ans += arr[31-i];
                ans %= mod;
            }
            
        cout << ans%mod << endl;
	}

    return 0;
}