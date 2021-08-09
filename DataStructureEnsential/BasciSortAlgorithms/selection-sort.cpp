#include<iostream>
using namespace std;
// Ideal:bằng cách liên tục tìm phần tử nhỏ nhất (xét theo thứ tự tăng dần) từ phần chưa được sắp xếp và đặt nó ở đầu. Thuật toán duy trì hai mảng con trong một mảng nhất định. 
int main() {
    int arr[] = {4,5,3,2,1};
    int N = sizeof(arr)/sizeof(int);
    for(int i = 0; i < N-1 ; i ++) {
        int min_idx = i;
        for(int j = i + 1; j < N ; j ++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    for(auto x : arr) {
        cout << " " << x << endl;
    }

}