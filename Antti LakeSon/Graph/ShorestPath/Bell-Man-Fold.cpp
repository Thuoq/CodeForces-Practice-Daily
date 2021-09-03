#include<bits/stdc++.h>

using namespace std;
typedef vector<tuple<int,int,int> > vi_tup;
class GraphUndirected { 
    private:    
        int N;
        vi_tup edges;
    public:
        GraphUndirected(int N) {
            this->N = N;
        }
        void addEdges(int a, int b,int weights) {
            this->edges.push_back(make_tuple(a,b,weights));
            this->edges.push_back(make_tuple(b,a,weights));
        }
        void showGraph() {
            for(auto &el : this->edges) {
                cout << get<0>(el) << "--->" << get<1>(el) << "with graph " << get<2>(el) << endl;
            }            
        }
        /** BELLMANFOLD: Finding the shores from s
         * @param s: started to find
         * 
        */ 
        void BellManFold(int s){

        }
};
int main() {
    GraphUndirected g(6);
    g.addEdges(1,3,3);
    g.addEdges(1,2,5);
    g.addEdges(1,4,7);
    g.addEdges(2,5,2);
    g.addEdges(2,4,3);
    g.addEdges(3,4,1);
    g.addEdges(4,5,2);
    g.showGraph();
}