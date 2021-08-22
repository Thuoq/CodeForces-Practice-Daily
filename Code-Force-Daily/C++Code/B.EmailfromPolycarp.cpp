#include<iostream>
#include<utility>
#include<vector>
#include<string>
using namespace std;
typedef vector<pair<char,int>> v_pair;
void solution(string s1,string s2) {
    v_pair S,T;

    int cnt = 1;
    int n1= s1.size();
    int n2 = s2.size();
    // Count the same character at position liền kề đúng thứ tự ban đầu
    for(int i = 0 ; i < n1 ; i ++ ) {
        if(s1[i] == s1[i+1]) {
            cnt++;
        }else {
            S.push_back(make_pair(s1[i],cnt));
            cnt = 1;
        }
    }
    cnt = 1;
    
    for(int i = 0 ; i < n2; i ++) {
        if(s2[i] == s2[i+1]) {
            cnt++;
        }else {
            T.push_back(make_pair(s2[i],cnt));
            cnt =1;
        }
    }
    // check size;
    if(S.size() != T.size()) {
        cout << "NO" << endl;
        return;
    }
    // Check condition at the same character;
    for(int i = 0;  i < S.size(); i ++) {
        if(S[i].first == T[i].first and S[i].second <= T[i].second) {
            continue;
        }else {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int num_pairs;
    cin >> num_pairs;
   
    while (num_pairs--)// 10^5
    {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        // logic;
        solution(s1,s2);
        /* code */
    }
    
}