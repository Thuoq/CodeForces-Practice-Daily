// Problem: https://codeforces.com/problemset/problem/1535/A?fbclid=IwAR1mtobWcpovgTmrmv3-auhNgFxw1LYemLzkgWijGzUt3ivcyg3AeDxYYuk

#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;

void solution(vi players) {
    int winLeft = max(players[0],players[1]);
    int winRight =  max(players[2],players[3]);
    int minLeft = min(players[0],players[1]);
    int minRight = min(players[2],players[3]);
    if(minLeft > winRight or minRight > winLeft) {
        cout << "NO\n";
    }else {
        cout <<"YES\n";
    }
}

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        vi players;
        for(int i = 0 ; i < 4 ; i ++) {
            int _;
            cin >> _;
            players.push_back(_);
        }
        solution(players);
    }    
}