#include<iostream>
using namespace std;
int liner_search(int arr[],int actualSize,int key) {
    for(int i = 0 ; i < actualSize; i ++) 
    {
        if (arr[i] == key ) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,5,6};
    int key = 2;
    int n = sizeof(arr)/ sizeof(int);
    int idx = liner_search(arr,n,key);
    if(idx != -1) {
        cout << "This is locate at index " << idx << " !!";
    }else {
        cout << "Is Not FOUND !!" << endl;
    }
    return 0;
}