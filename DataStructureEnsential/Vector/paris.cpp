/**
 * Problem: PAIR 
 * Cho mảng bao gồm N interger, và 1 number N là tổng của target sum 
 * Tìm 2 số để có thể đạt được targetsum 
*/
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int>  solution(vector<int> arr, int target) {
    unordered_set<int> s;
    vector<int> result;
    for(auto &el : arr) {
        int x = target - el;
        if(s.find(x)!=s.end()) {
            result.push_back(x);
            result.push_back(el);
            return result;
        }
        s.insert(el);
    }
    return result;
}
int main() {
    int n;
    cin >>n;
    vector<int> arr;
    for(int i = 0 ;i < n ; i ++) {
        int _;
        cin >> _;
        arr.push_back(_);
    }
    int target;
    cin >> target;
    vector<int> rt =solution(arr,target);
    if(!rt.size()) {
        cout << "Not Found !" << endl;
    }else {
        cout << rt[0] << ", " << rt[1] << endl;
    }

}