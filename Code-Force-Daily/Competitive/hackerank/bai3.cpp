#include<bits/stdc++.h>
using namespace std;
typedef vector<string> v_s;
typedef vector<int> v_i;
v_i subset;
v_s arr;
int n ;
int ANS = 0;

void search(int k) {
    if(k!= n) {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }else {
        int SIZE = subset.size();
        if(SIZE) {
            string ans ="";
            int memo[25] = {0};
            bool flag = false;
            for(auto idx : subset) {
                for(int i = 0 ;i < arr[idx].size() ;  i ++) {
                    if(memo[arr[idx][i]- 'a']) {
                        flag= true;
                    }
                    memo[arr[idx][i]-'a'] = 1;
                    ans += arr[idx][i];
                }
                if(flag) {
                    break;
                }
            }
            if(!flag) {
                int _ = ans.size(); 
                ANS = max(ANS,_);
            }
        }
       
    }
}
void solution() {
    search(0);
    cout << ANS << endl;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n ;
    for(int i = 0 ; i < n ; i ++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    solution();
    
    
}