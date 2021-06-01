#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
// IDE Codeblock 
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        //
        unordered_map<int, int> hash; // key <int> : value <int>
        // {
        //}
        vector<int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            // 6
            // {}
            // 3:0
            // 4:1
            // 
            int numFind = target - nums[i];// 3 // 2// 4
            if (hash.find(numFind) != hash.end()) // no co tim thay
            // 
            {
                a.push_back(hash[numFind]);
                a.push_back(i);
                break;
            }
            // 3 4 2 / 6;
            // 
            hash[nums[i]] = i;
          
        }// 
        return a;
    }
};
int main() {
    Solution sol;
    vector<int> arr {3,2,4};
    sol.twoSum(arr,6);
}