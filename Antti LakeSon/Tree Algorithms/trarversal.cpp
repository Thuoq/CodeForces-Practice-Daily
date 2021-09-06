#include "TreeUndirected.h"

int main() {
    TreeUndirected tree(9);
    tree.addEdges(1,2);
    tree.addEdges(1,3);
    tree.addEdges(1,4);
    tree.addEdges(2,5);
    tree.addEdges(2,6);
    tree.addEdges(6,8);
    tree.addEdges(4,7);
    //tree.showTree();
    cout << "====================" << endl;
    tree.dfs(1,0);
    cout << endl;
    cout << "====================" << endl;
    tree.countTree(1,0);
    cout << endl;
    tree.checkCount();

}