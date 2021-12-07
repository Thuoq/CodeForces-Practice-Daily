#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int steps;
    cin >> steps;
    char max_cha = 'f';
    for(int i = 0 ; i < s.size() ; i ++)  {
        if(s[i] < max_cha) {
            max_cha = s[i];
            
            // pos_max = i;
        }
    }
    //cout << max_cha << " Max cha" <<endl; 
    // save positions
    vector<int> pos_maxes; 
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == max_cha) {
            pos_maxes.push_back(i);
        }
    }
    int _max = INT_MAX;
    int pos_max = 0;
    char huong;

    for(auto pos : pos_maxes) {
        
        if(pos == 0) {
            // handle right
            if(_max > s[pos+1] + s[pos]) {
                pos_max = pos;
                _max = s[pos+1] + s[pos];
                huong='r';
            }
        
        }else if (pos == s.size() -1 ) {
            if(_max > s[pos-1] + s[pos]) {
                pos_max = pos;
                _max = s[pos-1] + s[pos];
                huong='l';
            }
        } else {
            // left right
            if(_max > s[pos+1] + s[pos]) {
                pos_max = pos;
                _max = s[pos+1] + s[pos];
                huong='r';
            }
            if(_max > s[pos-1] + s[pos]) {
                pos_max = pos;
                _max = s[pos-1] + s[pos];
                huong='l';
            }
        }
    }
    if(huong == 'l') {
        // handle output
        for(int i = 0;i<steps/2; i ++) {
            cout << s[pos_max] << s[pos_max-1];
        }
        if(steps%2==1) {
            cout << s[pos_max];
        }
        //cout << endl;
    }else {
        for(int i = 0;i<steps/2; i ++) {
            cout << s[pos_max] << s[pos_max+1];
        }
        if(steps%2==1) {
            cout << s[pos_max];
        }
        //cout << endl;
    }
    //cout << max_cha << " " << endl;
}