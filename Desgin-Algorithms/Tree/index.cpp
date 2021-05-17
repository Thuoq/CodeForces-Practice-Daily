#include"BinaryTree.h"
int main() {
    BinaryTree bst;
    bst.insert_interation(2);
    bst.insert_interation(1);
    bst.insert_interation(4);
    bst.insert_interation(5);

    bst.bfs();
    cout << endl;
    bst.dfs();
}