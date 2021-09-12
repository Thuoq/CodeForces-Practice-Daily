// Linkproblem: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2536&fbclid=IwAR3cCt7huxlFcLUiLsQCBGWEklRcjGEKefi0PyYsSUiSdOV4bIn4qrzW7aE

#include<bits/stdc++.h>
using namespace std;

void solution(string s,int t) {

    int n = s.size();
    int i =0;
    string ans = "";
    while(i < n ) {
       
        if( isalpha(s[i]) ) {
            int j = i+1;
            string duplicateStr = "";
            // check number next character;
            while (isdigit(s[j])and j <n)
            {
                duplicateStr+=s[j];
                s[j++];
            }
            // convert number String to interger;
            int numDuplicate = stoi(duplicateStr);
            // init ans by duplicate
            ans += string(numDuplicate,s[i]);
            // assgin i = j make run faster;
            i = j;
            // run again while
            continue;
        }
        i++;
    }
    
    cout <<"Case " << t << ": " << ans << endl;
    
}
int main() {
    int t;
    cin >> t;
    int k  =1;
    while(t--) {
        string s;
        cin >> s;
        solution(s,k);
        k++;
    }
    //cout << '0' - '0' << endl;
    
}
