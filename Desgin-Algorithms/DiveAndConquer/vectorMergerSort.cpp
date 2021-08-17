#include<iostream>
#include<vector>

using namespace std;
typedef vector<int> vi;
void merge(vi &arr, int s, int e) {
    int i = s;
    int middle = (s+e)/2;
    int j = middle + 1;
    vi temp;
    while(i <= middle && j <= e) {
        if(arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    // this loop for left  array
    while(i <= middle) {
        temp.push_back(arr[i]);
        i++;
    }
    // thi loop from right array
    while(j <= e) {
        temp.push_back(arr[j]);
        j++;
    }
    int k =0;
    for(int idx = s ; idx <= e ; idx ++) {
        arr[idx]= temp[k++];
    }
    return;
}
void mergerSort(vi &arr , int s, int e) {
    if (s < e) {
        int middle = (s+e)/2;
        mergerSort(arr,s,middle);
        mergerSort(arr,middle+1,e);
        return merge(arr,s,e);
    }
}
void printVec(vi arr) {
    for (auto &el : arr) {
        cout << el  << " ";
    }
    cout << "\n";
}
int main() {
   vi arr = {1,2,5,7,54,2,5,3,4,53};
   mergerSort(arr,0,arr.size()-1);
   printVec(arr);
   
}