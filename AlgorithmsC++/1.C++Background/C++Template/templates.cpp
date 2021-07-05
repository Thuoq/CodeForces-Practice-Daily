#include<iostream>
#include<vector>
using namespace std;
/**
 * Return the maximun item in array a.
 * Assumes a.size() > 0 
 * Comparable objects must provide operator< and operator = 
*/

template<typename Comparable>

const Comparable &findmax (const vector<Comparable> &arr) {
    int maxIdx = 0;
    for (int i = 1 ; i < arr.size(); i++) {
        if( arr[maxIdx] < arr[i])
            maxIdx = i;
    }
    return maxIdx;
}
int main() {
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
}