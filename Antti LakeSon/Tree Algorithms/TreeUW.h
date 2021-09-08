#include<bits/stdc++.h>


using namespace std;
typedef vector<pair<int,int> > vi_p;
typedef vector<int> vi;
class TreeUndirectedWeight { 
    private: 
        int n;
        vi_p; *adj;
        vi distance;
    public:
        TreeUndirectedWeight(int n ) {
            this->n  = n;
            this->adj = new vi_p[n];
        } 
        /** Add Edges Connect node a  to node b and as well as node b to node a
         * @param a is node a 
         * @param b is node b
         * @param w is weight from a to b
        */
        addEdges(int a, int b, int w) {
            this->adj[a].push_back({b,w});
            this->adj[b].push_back({a,w});       
        }
        /** BFS
         * 
        */
        void bfs(int s ) {
            
        }

};