#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int area = 0;
        int i = 0;
        int j = height.size() - 1;

        while (i != j)
        {
            int maxArea = 0;

            maxArea = abs(i - j) * min(height.at(i), height.at(j));
            area = max(area, maxArea);
            if (height.at(i) < height.at(j))
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return area;
    }
};