// Link Problem : https://codeforces.com/problemset/problem/131/A

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
    string letters;
    cin >> letters;
    bool is_check = true;
  
    for(int i = 1 ; i < letters.length()  ; i ++) {
        if(islower(letters[i])) {
            is_check = false;
            break;
        }
    }
    if(is_check) {
        
        for(int i = 0; i < letters.length() ; i ++) {
            if (islower(letters[i]))
                letters[i] = toupper(letters[i]);
            else
                letters[i] = tolower(letters[i]);
        }
        cout << letters;
    }else {
        cout << letters;
    }
}