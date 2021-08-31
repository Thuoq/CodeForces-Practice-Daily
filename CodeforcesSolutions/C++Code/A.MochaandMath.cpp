// Link problem: https://codeforces.com/problemset/problem/1559/A

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll_i;
ll_i min(ll_i x , ll_i y) {
    return x < y ? x : y;
}
void solution(ll_i A[], ll_i SIZE,ll_i _max_idx) {
    for(int i = 1 ; i< SIZE ; i ++) {
        if(i != _max_idx ) {
            A[_max_idx] &= A[i]; 
        }
    }
    

    cout << A[_max_idx] << endl;
    
}

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll_i t;
    cin >> t;
    while (t--)
    {
        int n ;
        cin >> n;
        ll_i _max_idx = LONG_MAX;
        ll_i _max = LONG_MIN;
        ll_i arr[n+1];
        for(int i = 1; i <= n ; i ++) {
            cin >> arr[i];
            if(arr[i] > _max ) {
                _max = arr[i];
                _max_idx = i;
            }
        }
        solution(arr,n+1,_max_idx);
    }

    

}