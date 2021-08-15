#include<iostream>
#include<vector>
using namespace std;
int solution(vector<vector<int> > connected, int n , int k ) {
    int ans = 0;

    

}
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n,k;
        cin >> n >> k;
        vector<vector<int> > connected;
        for(int i = 0 ; i < k ; i ++) {
            vector<int> _;
            int k1,k2;
            cin >> k1 >> k2;
            _.push_back(k1);
            _.push_back(k2);
            connected.push_back(_);
        }
        cout << solution()
    }
}