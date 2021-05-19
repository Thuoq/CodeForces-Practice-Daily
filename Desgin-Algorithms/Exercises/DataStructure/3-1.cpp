#include<iostream>
#include<stack>
#include<string>
#include<map>
using namespace std;
int main () {
    string s;
    cin >> s;
    stack<char> st;
    map<char,string> parentheses;
    parentheses['{'] = '}';
    parentheses['['] = ']';
    parentheses['('] = ')';
    bool checked = false;
    for(int i = 0 ; i < s.size() ; i ++) {
     
        if (parentheses[s[i]].size() == 1)
        {
            st.push(s[i]);
        }else {
            char left_parentheses = st.top();
            st.pop();
            string right_parentheses = parentheses[left_parentheses];
            if (right_parentheses[0] != s[i]) {
                checked = true;
                break;
            }
        }
    }
    if (checked)
    {
        cout << "NO";
    }
    !st.size()? cout << "YES": cout << "No";
    return 0;
}