#include<iostream>
#include<unordered_map>
#include<string>
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;
    unordered_map<char,ll> un_map;
    for(int i = 0; i < n ; i ++) {
        char key;
        cin >> key;
        ll val;
        cin >> val;
        un_map[key] = val; 
    }
    cin.ignore();
    string letters;
    getline(cin,letters);
    ll ans = 0;  
    for(int i = 0 ; i < letters.size() ; i ++) {
        auto search = un_map.find(letters[i]);
        if(search != un_map.end()) {
            ans+= un_map[letters[i]];
        }
    }
    cout << ans << endl;
}