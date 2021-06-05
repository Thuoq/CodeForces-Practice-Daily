#include<iostream>

#include<string>
using namespace std;
int min (int a, int b, int c) {
    return min(a,min(b,c));
}
int editDistance2(string s1, string s2) {
    int E[s1.size() + 2][s2.size() + 2];
    for(int i = 0 ; i < s1.size() ; i ++) {
        E[i][0] = i;
    }

    for(int i = 1 ; i < s2.size(); i++ ) {
        E[0][i] = i;
    }
    for(int i = 1; i < s1.size() ; i ++) {
        for(int j = 1; j < s2.size() ; j ++) {
            int diff = 1;
            if(s1[i] == s2[j] ) {
                diff= 0;
            }
            E[i][j] = min(E[i-1][j]+1,E[i][j-1] +1 ,E[i-1][j-1] + diff);
        }
    }
}
int editDistance(string s1, string s2,int len_s1 , int len_s2) {
    if(!len_s1) {
        return len_s2;
    }
    if(!len_s2) {
        return len_s1;
    }
    if(s1[len_s1-1] == s2[len_s2-1] ) {
        return editDistance(s1,s2,len_s1-1,len_s2-1);
    }
return 1 + min(
    editDistance(s1,s2,len_s1-1,len_s2),editDistance(s1,s2,len_s1,len_s2-1),
    editDistance(s1,s2,len_s1-1,len_s2-1)
    );
}

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    
    cout << editDistance(s1,s2,s1.size(),s2.size());
}