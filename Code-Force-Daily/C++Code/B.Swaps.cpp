// Link problem: https://codeforces.com/problemset/problem/1573/B?fbclid=IwAR2JZjob0wU0BvxMXimkwvrf-ubkVsw5WICpx5souFVOijtN-59JSTF6h48

#include<bits/stdc++.h>
using namespace std;

void solution(int A[], int B[], int Idx[],int n ) {
    int ans = INT_MAX;
    int i_min = INT_MAX;
    for(int i = 1 ; i <= n ; i ++ ) {
        i_min = min(i_min,Idx[A[i]]); // save i_min idx
        ans = min(ans,Idx[B[i]] + i_min -2); 
    }
    cout << ans << endl;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int A[n];
        int B[n];
        int Idx[2*n]; // save idx 
        for(int i = 1 ; i <= n ; i ++) {
            cin >> A[i];
            Idx[A[i]] = i;

        }
        for(int i = 1 ; i <= n ; i ++) {
            cin >> B[i];
            Idx[B[i]] = i;
        }
        sort(A+1,A+n+1);
        sort(B+1,B+n+1);
        
        solution(A,B,Idx,n);
    }
}