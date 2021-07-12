#ifndef BST_CPP_
#define BST_CPP_
#include "BinarySearchTree.h"
template<typename ItemType>
BinarySearchTree<ItemType>::BinarySearchTree() {
    this->root = nullptr;

}
template<typename ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(ItemType x) {  
   this->root = new BinaryNode(x,nullptr,nullptr);
}
#endif /* BST_CPP_ */