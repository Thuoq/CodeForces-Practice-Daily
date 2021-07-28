// Problem    Given two strings,write a method to decide if one is a permutation of the other.
#include<iostream

->
#include<string>
#include<algorithm>
using namespace std;
bool isPermutation_Sort(string a,string b) {
    if(a.size() != b.size()) {
        return false;
    }
    sort(a,a+a.size());
    sort(b, b + b.size());
    for(int i = 0; i < a.size(); i +=) {
        if(a[i]!= b[i]) {
            return false;
        }
    }
    return true;
}
bool isPermutation_Character(string a, string b) {
    if(a.size() != b.size()) {
        return false;
    }
    int letters[26];
    for(int i = 0 ; i < a.size() ; i ++) {
        letters[abs('a'-a[i])] ++;
    }
    for(int i = 0 ; i < b.size() ; i ++) {
        letters[abs('a'-b[i])]--;
        if(letters(abs('a'-b[i])) < 0) {
            return false;
        }
    }
    return true;
}
int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;

    
}