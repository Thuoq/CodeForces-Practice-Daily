#ifndef BST_CPP_
#define BST_CPP_
#include "BinarySearchTree.h"
#include<iostream> // iostream
using namespace std;
template<typename ItemType>
BinarySearchTree<ItemType>::BinarySearchTree() {
    this->root = nullptr;

}
template<typename ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(ItemType x) {  
   this->root = new BinaryNode(x,nullptr,nullptr);
}
template<typename ItemType>
void BinarySearchTree<ItemType>::insert(const ItemType &x) {
    BinaryNode *node  = new BinaryNode(x,nullptr,nullptr);
    this->insert(x,node);
}
template<typename ItemType>
void BinarySearchTree<ItemType>::insert(const ItemType &x,BinaryNode * &t) {
    cout << "Hello World" << endl;
}

template<typename ItemType>
void BinarySearchTree<ItemType>::remove(const ItemType &x){
    BinaryNode *node  = new BinaryNode(x,nullptr,nullptr);
    this->remove(x,node);
}
template<typename ItemType>
void BinarySearchTree<ItemType>::remove(const ItemType &x,BinaryNode * &t){
    cout << "Hello From Remove" << endl;
}
template<typename ItemType>
bool BinarySearchTree<ItemType>::contains(const ItemType &x,BinaryNode * &t) {

}
bool BinarySearchTree<ItemType>::contains(const ItemType &x) {
    return this->contains(x,this->root);
}
#endif /* BST_CPP_ */