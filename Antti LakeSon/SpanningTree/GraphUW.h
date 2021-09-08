#include<bits/stdc++.h>


using namespace std;
typedef vector<pair<int,int> > vi_p;
typedef vector<int> vi;
class GraphUndirectedWeight { 
    private: 
        int n;
        vi_p *adj;
        vi distance;
    public:
        GraphUndirectedWeight(int n ) {
            this->n  = n;
            this->adj = new vi_p[n];
        } 
        /** Add Edges Connect node a  to node b and as well as node b to node a
         * @param a is node a 
         * @param b is node b
         * @param w is weight from a to b
        */
        void addEdges(int a, int b, int w) {
            this->adj[a].push_back({b,w});
            this->adj[b].push_back({a,w});       
        }
        /** PRIM ALGORITHMS finding minimum spanning tree
         * @param start: start vertex
         * @return Total weight of minimum spanning tree
        */
        int prim(int start) {
            int _min_weights = 0;
            bool inTree[this->n];
            int distance[this->n];
            int parent[this->n];
            // set distance by max values;
            for(int i =  1 ; i < n ; i ++) {
                inTree[i] = false;
                distance[i] = INT_MAX;
                parent[i] = -1;
            }
            int currentVertex = start;
            distance[start] =0;
            int dist;
            while(!inTree[currentVertex]) {
                // set inTree CurrentVertext 
                inTree[currentVertex] = true;
                // check if not then + vao
                if(currentVertex != start) {
                    // check current in tree;
                    _min_weights = _min_weights +dist; // check lai sau
                }
                // for loop though all edges of CurrentVertex
                for(auto edges: this->adj[currentVertex]) {
                    int b = edges.first; // next vertex
                    int w = edges.second; // weight
                    // check if distance[b] > weights and inTree[b]= False
                    // Tuc la distance[b] chua co vao va intree = false;
                    if(distance[b] >w and (!inTree[b])) { 
                        distance[b] =w;//set weights at distace b
                        parent[b] = currentVertex; // set parrent make 
                    }
                }
                // check
                dist = INT_MAX;
                // make for loop make change the currentVertext and assign dist
                for(int i = 1 ; i < n ;  i ++ ) {
                    if(!inTree[i] and (dist > distance[i])) {
                        dist = distance[i];
                        currentVertex = i;
                    }
                }
            }
            return _min_weights;
        }
};