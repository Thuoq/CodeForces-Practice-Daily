#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    int key;
    cin >> key;
    vector<int>::iterator it = find(arr.begin(),arr.end(),key);
    if(it != arr.end()) {
        cout << "Find found my vector " << arr.end() << *it;
    }else {
        cout << "Not found !!" <<endl;
    }


    }