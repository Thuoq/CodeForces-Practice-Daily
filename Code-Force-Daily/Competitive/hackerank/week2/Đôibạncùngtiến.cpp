#include<bits/stdc++.h>
using namespace std;
typedef long long int ll_i;
typedef map<ll_i,int> mp;


void solution(mp negatives,mp positives,ll_i total_n,ll_i total_p) {
    ll_i ans = 0;
    if(total_p >= total_n) {
        ans += total_n;
        ll_i _sum = 0;
        for(auto &el : positives) {
            _sum += el.first;
        }
        ll_i avg = _sum/positives.size();
        // tim vi tri lon nhat ngay canh 
        ll_i tmp = 0;
        for(auto &el : positives) {
            if(el.first >= avg) {
                tmp = el.first;
                break;
            }
        }
    
        for(auto &el : positives) {
            if(el.first < tmp-el.first ) {
                ans += el.first;
            }else {
                ans += abs(tmp-el.first);
            }
         }
    }else {
        ans += total_p;
        ll_i _sum = 0;
        for(auto &el : negatives) {
            _sum += (el.first);
        }
        // cout << negatives.size() << endl;
        ll_i avg = _sum/negatives.size();

        ll_i tmp = 0; // this is negatives
        for(auto &el : negatives) {
            if((el.first) >= avg) {
                tmp = el.first;
                break;
            }
        }
        for(auto &el : negatives) {
            if((el.first) < (tmp-el.first) ) {
                ans += (el.first);
            }else {
                ans += abs(tmp-el.first);
            }
         }
    }
    cout << ans << endl;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    mp negatives;
    mp positives;
    ll_i total_n = 0;
    ll_i total_p = 0;
    for(int i = 0 ; i < n ; i ++) {
        int _;
        cin >> _;
        if(_ > 0) {
            positives[_] = 1;
            total_p += _;
        }else {
            negatives[-_]= 1;
            total_n +=abs(_);
        }
    }
    solution(negatives,positives,total_n,total_p);
    

    
}