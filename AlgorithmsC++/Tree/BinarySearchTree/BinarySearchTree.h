#ifndef BST_H
#define BST_H
#include<iostream>
template<typename ItemType>
struct BinaryNode;
template<typename ItemType>
class BinarySearchTree {
    private: 
        BinaryNode<ItemType> *root;
        void insert(const ItemType &x, BinaryNode<ItemType> * &t);
        void remove(const ItemType &x, BinaryNode<ItemType> * &t);
        bool contains(const ItemType &x,BinaryNode<ItemType> * &t) const ;
        BinaryNode<ItemType> *findMax(BinaryNode<ItemType> *t) const;
        BinaryNode<ItemType> *findMin(BinaryNode<ItemType> *t) const;
    public: 
        BinarySearchTree();
        BinarySearchTree(ItemType);
        bool contains(const ItemType &x) const;
        bool isEmpty() const;
        // void printTree(std::ostream &out = cout)const;

        void makeEmpty();
        void insert(const ItemType &x);
        // different between & parameter and &&;
       
        void remove(const ItemType &x);
        BinarySearchTree & operator = (const BinarySearchTree &rhs);
};
#include "BinarySearchTree.cpp"
#endif /* BST_H */