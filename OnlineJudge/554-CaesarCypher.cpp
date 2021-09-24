#include<bits/stdc++.h>
using namespace std;
typedef map<string,int> mp_s;
typedef map<char,int> mp_c;
mp_c alpha;
mp_s dict;
// int alphabet_num[27] = {0};

char alphabet_cha[27]; //"\n";
int MOD = 27;
// BUUBDLA PSSPABUAEBXO // k = 1

// ATTACK ZORRO AT DAWN 


void solution(string encrypted) {
    int n = encrypted.size();
    // cout << n << endl;
    int k;
    for(k = 1 ; k <= 26;  k++) {  // 26
        string tmp = "";
        bool flag = false;
        for(int i =  0 ; i < n; i ++) { // 250
            char x =  alphabet_cha[(alpha[encrypted[i]] - k + MOD)% MOD];
            // cout << "This is " << alphabet_cha[(alpha[encrypted[i]] - k + MOD)% MOD] << " " << endl;
            if(x == ' ') {
                // check khoang trang
                if(dict.count(tmp)) {
                    flag = true;
                    break;
                }
                // reset
                tmp = "";
                continue;
            }
            tmp +=x;
            // check when is khoang trang
        }
        if(dict.count(tmp)) {
            // flag = true;
            break;
        }
        if(flag) {
            break;
        }
    }
    // cout << k << endl;
    // handle when have K
    string result = "";
    for(int i =  0 ; i < n ; i ++) { 
        result += alphabet_cha[(alpha[encrypted[i]] - k + MOD)% MOD];
    }
    // erase trailing spaces
    while (result[result.size()-1] == ' ') {
        result.erase(result.end()-1);
    }
    int start = 0;
    while (true) {
        if (start + 60 >= result.size()) {
            for(int i = start ; i < result.size() ; i ++) {
                cout << result[i];
            }
            break;
        } else if (result[start + 60] == ' ') {
            int end = start + 60;
            while (result[end] == ' ') end--;
            for(int i = start ; i <= end ; i++) {
                cout << result[i];
            }
            cout << endl;
            start = start + 60;
            while (result[start] == ' ') start++;
        } else {
            int end = start + 59;
            while (result[end] != ' ') end--;
            while (result[end] == ' ') end--;
            for(int i = start ; i <= end ; i++) {
                cout << result[i];
            }
            cout << endl;
            start = end + 1;
            while (result[start] == ' ') start++;
        }
    }
    cout << endl;
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    alphabet_cha[0] = ' ';
    alpha[' '] =  0;
    char x = 'A';
    for(int i = 1 ; i <= 26 ; i ++) {
        alpha[x] = i;
        alphabet_cha[i] = x;
        x++;
    }
    // for(int i = 0 ; i <= 26 ; i ++) {
    //     cout <<  alphabet_num[i] << " " <<  alphabet_cha[i] << endl;
    // }
    while(true) {
        string _;
        cin >> _;
        if(_ == "#") {
            cin.ignore();
            break;
        }
        dict[_] = 1;
    }
    string encrypted;
    getline(cin,encrypted);
    solution(encrypted);
}