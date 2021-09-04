#include<bits/stdc++.h>
#define fo_1(i, n) for( i=1;i<n;i++)
#define deba_1(i, a, n) fo_1(i, n){cout << a[i] << " ";}
using namespace std;
typedef pair<int,int>  pi;
typedef vector<pi > vi_p;
class GraphUndirected{
    private:
        vi_p *adj;
        int n;
    public:
        GraphUndirected(int n) {
            this->n =  n;
            this->adj = new vi_p[n];
        }
        void addEdges(int a, int b ,int w){
            this->adj[a].push_back(make_pair(b,w));
            this->adj[b].push_back(make_pair(a,w));
        }
        /** Dijkstra's 
         * CONDITION: weights must have positives
         * @param s: (int) started to find
        */
        void dijkstra(int s) {
            int distance[this->n];
            for(int i = 1 ;i < this->n ; i ++) {
                distance[i] = 999999;
            }
            bool visited[this->n];
            memset(visited,0,this->n);
            // construct min-heap
            priority_queue <pi, vi_p, greater<pi> > min_heap;
            distance[s]=0;
            min_heap.push(make_pair(0,s));
            while(!min_heap.empty()) {
                int a = min_heap.top().second;min_heap.pop();
                if(visited[a]) continue;
                visited[a] =true;
                for(auto el : this->adj[a]) {
                    int b  = el.first,w = el.second;
                    if(distance[a] + w < distance[b] ) {
                        distance[b] = distance[a] + w;
                        min_heap.push(make_pair(distance[b],b));
                    }
                    // int k;
                    // deba_1(k,distance,this->n);
                    // cout << endl;
                }
            }
            cout << endl;
            int k;
            deba_1(k,distance,this->n);
        }
};

int main() {
    GraphUndirected g(6);
    g.addEdges(1,2,5);
    g.addEdges(1,4,9);
    g.addEdges(1,5,1);
    g.addEdges(2,3,2);
    g.addEdges(3,4,6);
    g.addEdges(4,5,2);
    g.dijkstra(1);
}