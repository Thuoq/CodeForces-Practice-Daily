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

    this->insert(x,this->root);
    
}
template<typename ItemType>
void BinarySearchTree<ItemType>::insert(const ItemType &x,BinaryNode * &t) {
    if(t == nullptr) {
        t = new BinaryNode(x,nullptr,nullptr);
    }else if (x > t->element) {
        this->insert(x,t->right);
    }else if (x < t->element) {
        this->insert(x,t->left);
    }else {
    }
}

template<typename ItemType>
void BinarySearchTree<ItemType>::remove(const ItemType &x){
   
    this->remove(x,this->root);
}
template<typename ItemType>
void BinarySearchTree<ItemType>::remove(const ItemType &x,BinaryNode * &t){
    cout << "Hello From Remove" << x  << t->element << endl;
}
template<typename ItemType>
bool BinarySearchTree<ItemType>::contains(const ItemType &x,BinaryNode * &t) const {
    if(t == nullptr) {
        return false;
    }else if (x > t->element) {
        return this->contains(x,t->right);
    }else if (x < t->element) {
        return this->contains(x,t->left);
    }else {
        return true;
    }
}
template<typename ItemType>
bool BinarySearchTree<ItemType>::contains(const ItemType &x) const {
    return this->contains(x,this->root);
}
  
template<typename ItemType>
ItemType BinarySearchTree<ItemType>::findMin() {
    return this->findMin(this->root)->element;
}
#endif /* BST_CPP_ */