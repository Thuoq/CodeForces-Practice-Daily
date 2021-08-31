#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int,int> un_map;
    for(int i = 0 ; i< n ; i ++) {
        cin >> arr[i];
        un_map[arr[i]] ++;

    }    
    int ans = 0;
   
    if(un_map[2] == 0) {
        ans = un_map[1]/3;
    }else if (un_map[1] == 0) {
        ans  = 0;
    }else if (un_map[1] == un_map[2]) {
        ans = un_map[1];
    }else {
        if(un_map[1] > un_map[2]) {
            ans += un_map[2];
            un_map[1]-= un_map[2];
        }else {
            ans += un_map[1];
            un_map[1]-=un_map[1];
        }
        
        ans += un_map[1]/3;
       
    }
    cout << ans << endl;

}