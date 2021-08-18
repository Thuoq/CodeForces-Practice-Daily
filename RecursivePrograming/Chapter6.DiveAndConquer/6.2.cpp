// Let a be a list of n nonnegative integers. Write a function based on the divide and conquer technique that returns the set of digits shared amongst all of the elements in a, and specify its asymptotic computational cost. For example, for a = [2348, 1349, 7523, 3215], the solution is {3}. The function should call another one that provides the set of digits in a nonnegative integer. Code this function as well.
#include<vector>
#include<iostream>
#define sliceBefore(arr,middle) vi(arr.begin(),arr.end()-middle)
#define sliceAfter(arr,middle) vi(arr.begin()+middle,arr.end())
using namespace std;
typedef vector<int> vi;
void getDigits(int numbs,vi &result) {
    if(numbs< 10) {
        result.push_back(numbs);
        return;
    }
    int a = numbs % 10;
    int numbNext = numbs/10;
     
    getDigits(numbNext,result);
}
void find_Left(vi arrLeft,int i , int j) {
    cout << i << " " << j << endl;
}
void find_Right(vi arrRight,int i , int j ){
    cout << i << " " << j << endl;
}


void print(vi arr) {
    for(auto &el : arr) {
        cout << el << " ";
    }
    cout << endl;
}
vi mergeSort(vi arr,int s, int e) {
    if (s == e) {
        return dige
    }
}
int main(){
    vi arr = {2348,1349,7523,3215,1253};
    vi result;
    mergeSort(arr,0,arr.size()-1);

}