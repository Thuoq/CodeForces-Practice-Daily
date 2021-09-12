#include<bits/stdc++.h>
using namespace std;
typedef vector<int > v_i;
#define clr(x) memset(x, 0, sizeof(x))
void solution(v_i graph[] , int n,bool visited[]) {
    map<int,int> mp;
    for(int i = 1 ; i < n ; i ++) {
        if(!visited[i]) {
            v_i count;
            int tmp = graph[i][0];
            int j = i;
            do
            {
                visited[j] = true;
                j = graph[j][0];
                count.push_back(j);
            } while (graph[j][0] != tmp);
            for(auto ver : count) {
                mp[ver] = count.size();
            }
            
        }
    }
    for(auto el: mp) {
        cout << el.second << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        v_i adj[n+1     ];
        bool visited[n+1];
        for(int i = 0 ;i < n ; i ++) {
            int _;
            cin >> _;
            visited[i+1] = 0;
            adj[i+1].push_back(_);  
        }
        solution(adj,n+1,visited);

    }
    
}