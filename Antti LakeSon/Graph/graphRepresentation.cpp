#include<bits/stdc++.h>

using namespace std;
typedef vector<int> v_i;
typedef vector<pair<int,int> > vi_p;
typedef vector<tuple<int,int,int> > vi_tup;
void showConnected (v_i a[],int N) {
    for(int i = 1 ; i < N ; i ++ ) {
        for(auto &el: a[i]) {
            cout << i << "--->" << el << endl;
        }
        // for(int j = 0 ;j < a[i].size() ; j++) {
        //     cout << i << "--->" << a[i][j] << endl;
        // }
    
    }
}
void showConnectedEdges_Weights(vi_tup edges_tup) {
    for(auto &el: edges_tup) {
        cout << get<0>(el) << "-->" << get<1>(el) << "with weights " << get<2>(el) << endl;
    }
}
void showConnectedEdges(vi_p edges) {
    for(auto &el: edges) {
        cout << el.first << "-->" << el.second << endl;
    }
}
void showConnectedWeight (vi_p a[],int N) {
    for(int i = 1 ; i < N ; i ++ ) {
        for(auto &el: a[i]) {
            cout << i << "--->" << el.first << "with weight  " << el.second <<  endl;
        }
        // The same above
        // for(int j = 0 ;j < a[i].size() ; j++) {
        //     cout << i << "--->" << a[i][j].first << "with weight  " << a[i][j].second <<  endl;
        // }
    }
    // for( auto &i : a) {
    //     for(auto &el: i ) {
    //         cout << i << "--->" << el.first << "with weight  " << el.second <<  endl;
    //     }
    // }
}
int main( ) {
    int N;
    cin >> N ;
    // ADJ
    /**
     *  1->2
     *  2->3
     *  2->4
     *  3->4
     *  4->1
     * **/
    v_i adj[N];
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    showConnected(adj,N);
    //directed graph have weight 

    vi_p graph_w[N];
    // pair a ->w b  {b,w}; b la node | w la weight
    graph_w[1].push_back(make_pair(2,5));
    graph_w[2].push_back(make_pair(3,7));
    graph_w[2].push_back(make_pair(4,6));
    graph_w[3].push_back(make_pair(4,5));
    graph_w[4].push_back(make_pair(1,2));
    showConnectedWeight(graph_w,N);
    // make graph by matrix
    int matrix[N][N]; // if a[a][b] == 1 is a -> b
    cout << "========= EDGES ============" << endl;
    // Edge list representation
    vi_p edges;
    // if not weights;
    edges.push_back(make_pair(1,2));
    edges.push_back(make_pair(2,3));
    edges.push_back(make_pair(2,4));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(4,1));
    showConnectedEdges(edges);
    // If weights;
    cout << "========= TUPLES WEIGHTS ============" << endl;
    vi_tup edges_weight;
    edges_weight.push_back(make_tuple(1,2,5));
    edges_weight.push_back(make_tuple(2,3,7));
    edges_weight.push_back(make_tuple(2,4,6));
    edges_weight.push_back(make_tuple(3,4,5));
    edges_weight.push_back(make_tuple(4,1,2));
    showConnectedEdges_Weights(edges_weight);
}