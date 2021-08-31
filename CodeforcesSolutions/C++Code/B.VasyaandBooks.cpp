// Link problem : https://codeforces.com/problemset/problem/1073/B?fbclid=IwAR2TuWAR4ciGmKx1LObIMnHhZzil_RMJ8v8uyeQQmrGWPe1wFFZJSFbVZJw

#include<iostream>
#include <algorithm>
#include<vector>
#include<stack>
using namespace std;

int main() {
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(auto &el : arr) {
        cin >> el;
    }
    // đổi chiều để vào stack;
    reverse(arr.begin(),arr.end());
    stack<int,vector<int>> box(arr);
    int orders[n];
    int seen[n];
    for(int i = 0 ; i < n ; i ++) {
        cin >> orders[i];
        seen[i] = 0;
    }

    int tmp = 0;
    vector<int> storedSteps(n,0);
    while (box.size())
    {
        // check is seen;
        if(seen[orders[tmp]-1]) { // seen[2] // seen[1] // seen[3]
            storedSteps[tmp] = 0;
            tmp++;
            continue;
        }
        int step = 0;
        int item = box.top();
        box.pop(); // [2,3]
        step++; // 1
        seen[item-1] = 1;  // seen[1] = 1;
        while(orders[tmp] != item) { // 2 != 1
            item = box.top(); // 2 
            box.pop();  // [3]
            seen[item-1] = 1;  // seen[2] = 1;
            step++;  // 2
        }
        storedSteps[tmp] = step;
        tmp ++; //1
    }
    // print 
    for(auto &el: storedSteps) {
        cout << el << " ";
    }
    
}