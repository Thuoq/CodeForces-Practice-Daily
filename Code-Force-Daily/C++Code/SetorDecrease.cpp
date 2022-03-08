// Link problem: https://codeforces.com/contest/1622/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> v_i;
int solution(v_i arr,int sum_o ,int k){
    int cnt = 0;
    v_i save_step;
    while (true)
        {
            int step = 0;
            bool check = false;
            int saves_sum = sum_o;
            for(int i = 0 ;i < arr.size() -1 ; i ++) {
                if (!check) {
                    arr[arr.size()-1] = arr[arr.size()-1] - cnt;
                    saves_sum-= cnt;
                    step+=cnt;
                    check = true;
                }
               
                saves_sum -= arr[i] - arr[arr.size()-1]; // tisnh chenh lech lai
                
                step +=1; // tang step len 1 
                if(saves_sum <= k) { // so sanh khi da thay vao 
                    if(save_step.size() == 0) {
                        save_step.push_back(step);
                    }else if (save_step[save_step.size()-1] < step) { // check xem no co lon hon cai dau ko ? 
                        
                        return save_step[save_step.size()-1];
                    }else {
                        save_step.push_back(step);
                    }
                    // bla bla
                  
                }
            }
            cnt++;
        }     
}
int sum_origin(v_i arr){
    int _ = 0;
    for(auto el: arr ) 
    {
        _+= el;
    }
    return _;
}
int main() {
    int t; 
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        v_i arr(n,0);
        for(auto &el : arr) {
            cin >> el;
        }
        int sum_o = sum_origin(arr);
        if(sum_o <= k ) {
            cout << 0 << endl;
        }else {
            sort(arr.begin(),arr.end(),greater<int>());
            cout << solution(arr,sum_o,k) << endl;
        }
           
    }
    

}