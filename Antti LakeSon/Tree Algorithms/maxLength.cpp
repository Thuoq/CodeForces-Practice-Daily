#include "TreeUndirected.h"
using namespace std;

int main() {
    TreeUndirected tree(7);
    tree.addEdges(1,2);
    tree.addEdges(1,3);
    tree.addEdges(1,4);
    tree.addEdges(2,5);
    tree.addEdges(2,6);
    tree.findLongestPath();
}