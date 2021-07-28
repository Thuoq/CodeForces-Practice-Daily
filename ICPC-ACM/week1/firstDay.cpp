// dictionary , object , C++: map # Red Black Tree or undorder map
    
// map<int,int> stored : key: value

// stored[key]  = value; Time O(logN)

// unordered_map<int,int> stored2: key : value 

// stored2[key] : Time O(1)

// map unordere_map 

// array {2,4,5,6}, sum = 8 => [0,3]
// array {3,2,4}, sum = 6 => [1,2]
#include<iostream>
#include<vector>
//#include<unordered_map>
using namespace std;
int DIRECTIONS[4][3]= {
    {-1, 0}, // UP
    {0, 1},  // RIGHT
    {1, 0},  // DOWN
    {0, -1}  // LEFT
};
class Solution {
    // vector<int> twoSum(vector<int> &arr, int sum) {
    //     vector<int> ans;
    //     //unordered_map<int,int> stored; 
    //     for(int i = 0 ; i < arr.size() ; i ++) {
             
    //         int expect_key = sum - arr[i];
    //         // check is sum
    //         if(stored[expect_key]) {
    //             ans.push_back(stored[expect_key]);
    //             ans.push_back(i);
    //             break;
    //         }else {
    //             // add expect_key into map
    //             stored[expect_key] = i;
    //         }
    //     }
    //     return ans;
    // }
   
   
};
void dfs(vector<vector<int> > &arr,vector<vector<int> > &seen, int row, int col) {
    if(row < 0 || col < 0 || row >= arr.size() || col >= arr[0].size() || seen[row][col]) {
        return;
    }
    seen[row][col] = 1;
    cout << arr[row][col] << endl;
    for(int i = 0 ; i < 4; i ++) {
        int newCol = col +DIRECTIONS[i][1];
        int newRow = row + DIRECTIONS[i][0];
        dfs(arr,seen,newRow,newCol);
    } 
};
void bfs(vector<vector<int> > &arr,vector<vector<int> > &seen,, int row, int col) {
    vector<vector<int> > queue;
    vector<int> a;
    a.push_back(row);
    a.push_back(col);
    queue.push_back(queue);
    while(queue.size()) {
        vector<int> top = queue.front();
        queue.erase(top.begin());
        int row = top.at(0);
        int col = top.at(1);
        if(row < 0 || col < 0 || row >= arr.size() || col >= arr[0].size() || seen[row][col]) {
            continue;
        }
        seen[row][col] = 1;
        for(int i =0 ; i < 4; i ++) {
            vector<int> direct;
            int newRow = row + DIRECTIONS[i][0];
            int newCol = col + DIRECTIONS[i][1];
            direct.push_back(newRow);
            direct.push_back(newCol);
            queue.push_back(direct);
        }
    }
}
int main() {
    vector<vector<int> > matrix;

}