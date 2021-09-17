// Link problem:https://codeforces.com/contest/1562/problem/C
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solution(int n ,string s ) {
    bool is_zeros = 0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='0'){
            is_zeros=1 ;
            break;
        }
    }
    if(!is_zeros){
        cout<<1<<' '<<n-1<<' '<<2<<' '<<n<<'\n';
    }else{
        bool flag = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '0'){
                if (i >= n / 2){
                    cout <<1<<' '<<i+1<<' '<<1<<' '<<i<<'\n';
                    flag=1;
                }
                else{
                    cout <<i+2<<' '<<n<<' '<<i+1<<' '<<n<<'\n';
                    flag=1;
                }
            }
            if(flag){
                break;
            }
        }
    }
}
int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    FAST_IO
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        string s ;
        cin>>n>>s;
        solution(n,s);
    }
    return 0;
}