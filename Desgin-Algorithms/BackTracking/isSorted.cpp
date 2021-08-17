#include<vector>
#include<iostream>
using namespace std;
typedef vector<int> vi;
#define sliceBefore(arr,middle) vi(arr.begin(),arr.end()-middle)
#define sliceAfter(arr,middle) vi(arr.begin()+middle,arr.end())
bool isSorted(vi arr )  {
    int n = arr.size();
    if (n <= 1) {
        return true;
    }
    int middle = n/2;
    return isSorted(sliceBefore(arr,middle)) and arr[middle-1] <= arr[middle] and isSorted(sliceAfter(arr,middle));
}
vi get_smaller_than(vi arr, int x,vi &result) {
    if(!arr.size()) {
        return arr;
    }else if (arr[0] >= x) {
        return get_smaller_than(sliceAfter(arr,1),x,result);
    }else {
        result.push_back(arr[0]);
        get_smaller_than(sliceAfter(arr,1),x,result);
        return result;
    }
}
void printArray(vi arr) {
    for (auto &x : arr) {
        cout << x << " :";
    }
    cout << "\n";
}

int main() {
    vi arr = {3,52,1,4,6,5};
    cout << isSorted(arr) << "\n";   
    vi result; 
    cout << "==============";
    printArray(get_smaller_than(arr,1,result));
    cout << "==============";
    vi result2;
    merge_sort(arr,result2);
    printArray(result2);
}   