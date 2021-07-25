#ifndef BST_CPP_
#define BST_CPP_
#include "BinarySearchTree.h"
#include<iostream> // iostream
using namespace std;
template<typename ItemType>
struct BinaryNode { 
    ItemType element;
    BinaryNode<ItemType> *left;
    BinaryNode<ItemType> *right;
    BinaryNode<ItemType>(const ItemType &theElement, BinaryNode<ItemType> *lt,BinaryNode<ItemType> *rt){
        element = theElement;
        left = lt;
        right = rt;
    };
};
template<typename ItemType>
BinarySearchTree<ItemType>::BinarySearchTree() {
    this->root = nullptr;

}
template<typename ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(ItemType x) {  
   this->root = new BinaryNode<ItemType>(x,nullptr,nullptr);
}
template<typename ItemType>
void BinarySearchTree<ItemType>::insert(const ItemType &x) {

    this->insert(x,this->root);
    
}
template<typename ItemType>
void BinarySearchTree<ItemType>::insert(const ItemType &x,BinaryNode<ItemType> * &t) {
    if(t == nullptr) {
        t = new BinaryNode<ItemType>(x,nullptr,nullptr);
    }else if (x > t->element) {
        this->insert(x,t->right);
    }else if (x < t->element) {
        this->insert(x,t->left);
    }else {
    }
}
template<typename ItemType>
BinaryNode<ItemType>* BinarySearchTree<ItemType>::findMin(BinaryNode<ItemType> *t) const {
    if(t==nullptr) {
        return nullptr;
    }
    if(t->left == nullptr) {
        return t->left;
    }
    return findMin(t->left);
}
template<typename ItemType>
BinaryNode<ItemType>* BinarySearchTree<ItemType>::findMax(BinaryNode<ItemType> *t) const {
    if(t==nullptr) {
        return nullptr;
    }
    if(t->right == nullptr) {
        return t->right;
    }
    return findMax(t->right);
}
template<typename ItemType>
void BinarySearchTree<ItemType>::remove(const ItemType &x){
   
    this->remove(x,this->root);
}
template<typename ItemType>
void BinarySearchTree<ItemType>::remove(const ItemType &x,BinaryNode<ItemType> * &t){
    cout << "Hello From Remove" << x  << t->element << endl;
}
template<typename ItemType>
bool BinarySearchTree<ItemType>::contains(const ItemType &x,BinaryNode<ItemType> * &t) const {
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
#endif /* BST_CPP_ */