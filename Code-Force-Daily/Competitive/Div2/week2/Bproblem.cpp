#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
typedef vector<int> vi;
void print(vi ans ) {
    for(auto &el: ans) {
        cout << el << " ";
    }
    cout << endl;
}
void solution(int a, int b) {
    vi ans;
    // logic


    sort(ans.begin(),ans.end());
    print(ans);
}
int main() {
    int t ;
    cin >> t;
    while (t--)
    {
        int a , b;
        cin >> a >> b;
        solution(a,b)
    }
    
}