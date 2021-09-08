#include "GraphUW.h"
#include "DisjointSet.h"
int main() {
    // PRIM
    // GraphUndirectedWeight guw(7);
    // guw.addEdges(1,2,3);
    // guw.addEdges(1,5,5);
    // guw.addEdges(2,3,5);
    // guw.addEdges(2,5,6);
    // guw.addEdges(3,4,9);
    // guw.addEdges(3,6,3);
    // guw.addEdges(4,6,7);
    // guw.addEdges(5,6,2);
    // cout << guw.prim(1) << endl;

    DisjointSet ds(8);
    //ds.print();
    // ds.union_Set(3,5);
    ds.union_Set(4,6);
   
    ds.union_Set(4,2);
    ds.union_Set(2,7);

    
    ds.print();
}