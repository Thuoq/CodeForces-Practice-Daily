#include<iostream>
#include<string>
using namespace std;
class Solution
{
public:
    string RemoveSpecials(string str)
    {
        int i = 0, len = str.length();
        while (i < len)
        {
            char c = str[i];
            if (((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
            {
                if ((c >= 'A') && (c <= 'Z'))
                    str[i] += 32; //Assuming dictionary contains small letters only.
                ++i;
            }
            else
            {
                str.erase(i, 1);
                --len;
            }
        }
        return str;
    }
    bool isPalindrome(string str)
    {
        string s = RemoveSpecials(str);
        if (s.size() == 1)
            return true;
        int left = 0;
        int right = s.size() - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                return false;
            }
            /* code */
            left++;
            right--;
        }

        return true;
    }
};
int main() {
    string my_str;
    getline(cin,my_str);
    Solution sl;
    cout << sl.isPalindrome(my_str);
}