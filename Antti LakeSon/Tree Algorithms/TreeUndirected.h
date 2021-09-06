#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
class TreeUndirected { 
    private:
        int n ;
        vi *adj;
        int *count;
    public:     
        TreeUndirected(int n ) {
            this->n = n;
            this->adj = new vi[n];
            this->count = new int[n];

        }
        void addEdges(int a, int b) {
            this->adj[a].push_back(b);
            this->adj[b].push_back(a);
        }
        void showTree() {
            for(int i = 1 ; i<n ; i ++) {
                for(auto n : this->adj[i]) {
                    cout << i << "-->" << n << endl;
                }
            }
        }
        /** DFS: Traversal tree
         * @param start: node start
         * @param previous: node previous
         * @return void
        */
        void dfs(int start, int previous) {
            cout << start << " ";
            for(auto edges: this->adj[start]) {
                if(edges != previous) dfs(edges,start);
            }
        }
        /** Count subtree
         * @param start: node start
         * @param previous: node previous
        */
        void countTree(int start, int previous) {
            this->count[start] = 1;
            for(auto edeges: this->adj[start]) {
                if(edeges == previous) continue;
                this->countTree(edeges,start);
                this->count[start] += this->count[edeges];
            }
        }
        void checkCount() {
            for(int i = 1; i < this->n ; i ++) {
                cout << this->count[i] << " ";
            }
        }
        /** All longest path
         * Finding the longest path from graph
        */
        void findLongestPath() {
            this->countTree(1,0);
            auto x= max_element(this->count+1,this->count+this->n) ;
            cout << distance(this->count+1,max_element(this->count+1,this->count+this->n)) << endl;
            this->checkCount();
        }
};