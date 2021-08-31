#include<iostream>
#include <algorithm>
using namespace std;
void print(int arr[],int SIZE) {
    for(int i = 1 ;i < SIZE ; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void solution(int arr[], int SIZE) {
    int ans = 0;
    // 7
    // 4 5 7 1 3 2 6 | ans = 1| 2 
    // 4 5 1 7 2 3 6 | ans = 1| 2 
    // 4 1 5 2 7 3 6                ans = 4
    // 1 4 2 5 3 7 6
    
    for(int i = 1 ;i < SIZE;  i ++) {// -> n
        //print(arr,SIZE);
        if(is_sorted(arr+1,arr+SIZE)) {
            break;
        }else {

            // bool check = false;
            if (i % 2 != 0) { // odd
                for(int j =1 ; j < SIZE -1  ;j +=2) { // swapi
                    if(arr[j] > arr[j+1]) {
                        // if(!check) {
                        //     ans ++;
                        // }
                        //check= true;
                        swap(arr[j],arr[j+1]);
                    }
                }
            }else {
                for(int j =2 ; j < SIZE -1  ;j +=2) {
                    if(arr[j] > arr[j+1]) {
                        // if(!check) {
                        //     ans ++;
                        // }
                        //check = true;
                        swap(arr[j],arr[j+1]);
                    }
                }
            }
            ans ++;
        }
    
       

       
    }

    cout << ans << endl;
}
int main() {

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        cin >> n; 
        int arr[n+1];
        for(int i = 1 ;i <= n ; i ++) {
            cin >> arr[i];
        } 
        solution(arr,n+1);
    }
    
}