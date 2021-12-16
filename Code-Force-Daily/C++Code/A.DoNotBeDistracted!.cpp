// Link problem:https://codeforces.com/problemset/problem/1520/A
#include<bits/stdc++.h>
using namespace std;
typedef map<char,int> mp_c_i;
int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        mp_c_i st;
        int n;
        cin >>n;
        string s;
        cin >> s;
        bool flag = false;
        for(int i = 0 ; i < s.size();) {
            if(st.count(s[i])) {
                flag = true;
                break;
            }else {
                st[s[i]] =1;
                char note= s[i];
                while (note == s[i])
                {
                   i++; 
                } 
            }
        }
        if (flag) {
            cout << "NO" << endl; 
        }else {
            cout << "YES" << endl;
        }

    }
    
}