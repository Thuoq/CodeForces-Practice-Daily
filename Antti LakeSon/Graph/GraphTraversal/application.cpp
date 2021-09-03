#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
class GraphUndirected { 
    private:
        vi *adj;
        int N;
        bool *visited;
    public:
        GraphUndirected(int N) {
            this->N =  N;
            this->adj = new vi[N];
            this->visited = new bool[N];
        }
        void addEdges(int a, int b) {
            this->adj[a].push_back(b);
            this->adj[b].push_back(a);
        }
        void showConnected() {
            for(int i = 1; i < N ; i ++) {
                for(auto &el: this->adj[i]) {
                    cout << i << "--->" << el << endl;
                }
            }
        }
        /** DFS base;
         * 
         * 
        */
        void dfs(int s) {
            if(this->visited[s]) return;
            visited[s] = true;
            for(auto &el : this->adj[s]) {
                dfs(s);
            }
        }
        /** DFS Make check Connect;
         * 
         * 
        */
        void dfs_check_connect(int s, int &cnt_n) {
            if(this->visited[s]) return;
            visited[s] = true;
            cnt_n ++;
            for(auto &el : this->adj[s]) {
                dfs_check_connect(el,cnt_n);
            }
        }
        /** Connectivity
         *  DEFINTION: A graph is connected if there is a path between any two nodes of graph
        **/
        bool connectivity() {
            int cnt_n = 0;
            dfs_check_connect(1,cnt_n);
            return cnt_n == this->N -1;
        }
        /** Finding cycles
         *  DEFINTION: Một graph có 1 chu kỳ nếu trong quá trình traversal tìm được 1 node  có hàng xóm  khác với các node trong path now. Nghĩa là a->b -c mà tìm được c-> khác với nút b thì đó là 1 chu trình 
         * Một cách khác    để check 1 graph có 1 chu trình đơn giản tính các node trong mỗi component. Nếu 1 component bao gồm c node và không có chu kỳ thì nó phải có c-1 edges . Nếu có c hoặc nhiều hơn thì chắc chắn nó là có cycle
         * 
        **/


        /**
          * DEFINTION: Bipartiteness check 
          * Bipartiteness khi va chi khi sử dụng 2 color đánh dấu 
        **/

};
int main() {
    GraphUndirected g(6),g2(7); // allocation 5 memories bd tu 0;
    //  graph 1
    g.addEdges(1,3);
    g.addEdges(3,4);
    g.addEdges(1,4);
    g.addEdges(2,5);
    //  g.showConnected();
    //  graph 2
    g2.addEdges(1,4);
    g2.addEdges(1,2);
    g2.addEdges(2,5);
    g2.addEdges(2,3);
    g2.addEdges(3,6);
    g2.addEdges(5,6);

    cout << g.connectivity() << endl;
    cout << g2.connectivity() << endl;
}