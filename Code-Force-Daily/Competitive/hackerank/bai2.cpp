#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef map<int,int> mp;
vi subset;
vi result;
mp visited;
int n ;
int target;
void search(int k , vi &arr) {
    if(k!= n) {
        search(k+1,arr);
        subset.push_back(k);
        search(k+1,arr);
        subset.pop_back();
    }else {
        int SIZE = subset.size();
        if(SIZE) {
            int sum = 0;
            int _count = 0;
            for(auto el : subset) {
                sum += arr[el];
                if(sum > target) {
                    return;
                }
                cout << el  << " ";
                if(visited.count(arr[el])) {
                    _count ++;
                }
                visited[arr[el]] = 1;
            }
            cout << endl;
            if(sum == target and _count != SIZE) {
                // cout << sum << endl;
                result.push_back(1);
            }
        }
        
    }
}
void solution(vi arr) {
    search(0,arr);
    cout << result.size() << endl;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n ;
    vi arr(n,0);
    for(auto &el: arr) {
        cin >> el;
    }
    cin >> target;
    solution(arr);
    
    
}