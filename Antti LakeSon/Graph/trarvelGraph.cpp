#include<bits/stdc++.h>


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
        
};
int main() {
    int N ;
    cin >> N;
    Graph gp(N);
    gp.dfs(1);
    
}