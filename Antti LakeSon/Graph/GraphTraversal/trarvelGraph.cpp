#include<bits/stdc++.h>

#define clr(x) memset(x, 0, sizeof(x))
using namespace std;
typedef vector<int> vi;
class Graph {
    private:
        int N;
        vi *adj;
        bool *visited;
        
    public: 
        Graph(int N) {
            this->N = N;
            this->adj = new vi[N];
            this->visited = new bool[N];
            this->adj[1].push_back(2);
            this->adj[2].push_back(3);
            this->adj[2].push_back(4);
            this->adj[3].push_back(4);
            this->adj[4].push_back(1);
        }
        void dfs(int s) {
            if(visited[s]) return;
            visited[s] = true;
            cout << s << " ";
            for(auto &el: this->adj[s]) {
                dfs(el);
            }
        }
        void bfs(int s) {
            bool visited[N];
            int distance[N];
            queue<int> q;
            q.push(s);
            visited[s] = true;
            distance[s] = 0; // for non directed
            while (q.size())
            {
                int n = q.front();
                q.pop();
                cout << n << " ";
                for(auto &el: this->adj[n]) {
                    if(visited[el]) continue;
                    visited[el] = true;
                    distance[el] = distance[n] +1;
                    q.push(el);
                }
            }
            cout << endl;
            for(int i= 1 ; i <N ; i ++) {
                cout << distance[i] << ' ';
            }

        }
        
};
int main() {
    int N ;
    cin >> N;
    Graph gp(N);
    gp.dfs(1);
    cout << endl;
    gp.bfs(1);
    
}