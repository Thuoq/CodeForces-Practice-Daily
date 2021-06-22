#include<iostream>
#include<string>
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // check base case
        int n = s.size();
        if (s.size() <= 1) return n;
        unordered_map<char,int> map;
        int left = 1;
        int longest= 0;
        for(int i =  0 ; i < n ; i ++){
            char currentChar = s[i];
            int preChar = map[currentChar];
            if (preChar >= left)
            {
                left = preChar+1;
            }
            map[currentChar] = i +1;
            longest = max(longest,i+1-left+1);
        }
        return longest;
    }
};

int main() {
    Solution sl;
    string input;
    cin >> input;
    cout << sl.lengthOfLongestSubstring(input);
}