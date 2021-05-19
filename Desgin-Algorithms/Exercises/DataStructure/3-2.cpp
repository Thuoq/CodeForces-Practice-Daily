/*Give an algorithm that takes a string S consisting of opening any closing
parentheses, say )()(())()()))())))(, any finys the length of the longest balancey parentheses in S, which is 12 in the example above. (Hint: The solution is not necessarily a contiguous run of parenthesis from S
*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int findMaxWithStack(string s) {
    // This is O(n): Time Space: O(N)
    int maxLongest = 0;
    int count  = 0;
    stack<int> stk;
    stk.push(-1); // Thêm -1 để trừ trường hợp ()
    for(int i = 0 ;i  < s.size() ; i ++ ) {
        if(s[i] == '(') {
            stk.push(i);
        }else {
            if(!stk.empty()) {
                stk.pop();
            }
            if(!stk.empty()) {
                maxLongest ++;
               
                // ))
            }else {
                stk.push(i);
            }

        }
    }
    
    return maxLongest*2;
}
int findMaxWithTwoPointer(string s) {
    int right =0,left = 0,maxLength = 0;
    for(int i = 0 ; i < s.size() ; i ++) {
        if(s[i]=='(') {
            left ++;
        }else {
            right ++;
        }
        if(left == right) {
            maxLength = max(maxLength, 2 * right);
        }else if (right > left ) {
            left = right = 0;
        }
    }
    left = right = 0;
    // Loop right to -> left;
    for(int i = s.size()-1 ; i >= 0 ; i --) {
        if(s[i] == '('){
            left ++;
        }else {
            right ++;
        }
        if(left == right) {
            maxLength = max(maxLength, 2 * left);
        }else if (left > right ) {
            left = right = 0;
        }
    }
    return maxLength;

}

int main() {
    string test = ")()(())()()))())))(";
    cout << findMaxWithStack(test) << endl;
    // cout << findMaxWithTwoPointer(test) << endl;
}