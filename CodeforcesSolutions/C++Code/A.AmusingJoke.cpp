// Link Problem:https://codeforces.com/problemset/problem/141/A
#include<iostream>
#include<string>
using namespace std;
int main() {
    string a;
    string b;
    cin >> a >> b;
    string c;
    cin >> c;
    
    if(a.size() + b.size() != c.size()) {
        cout << "NO";
    }else {
        int characters[26] ={0};
        for(int i = 0 ; i < a.size() ; i ++) {
            characters[a[i]-'A'] ++;
        }
        for (int i = 0; i < b.size(); i++)
        {
            characters[b[i] -'A']++;
        }
        int charactersB[26] = {0};
        for(int i = 0 ; i < c.size() ; i ++) {
            
            charactersB[c[i]-'A']++;
            
        } 
        
        bool check = true;
        for(int i = 0 ; i < 26; i++){
            if (characters[i] != charactersB[i]) {
                check = false;
                break;
            }
        }
        check ? cout << "YES": cout << "NO";
    }
   
}