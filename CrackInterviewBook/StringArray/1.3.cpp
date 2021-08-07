#include<iostream>
#include<string>
using namespace std;
// Question: Write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient space at the end to hold the additional characters, and that you are given the "true" length of the string. (Note: if implementing in Java, please use a character array so that you can perform this operation in place.)
// Input: Mr John Smith ", 13
// Output:"Mr%20John%20Smith"
string solution(string str, int true_length) {
    string ans;
    int count_space = 0;
    for(int i = 0 ;i  < true_length; i ++) {
        if (str[i] == ' ') {
            ans+="%20";
        }else {
            ans +=str[i];
        }
    }
    return ans;
}
int main() {

    string str;
    int true_length;
    getline(cin,str);
    cin >> true_length;
    cout << solution(str,true_length) << endl;
}