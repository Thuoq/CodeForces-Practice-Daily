#ifndef BST_H
#define BST_H
#include<iostream>
template<typename ItemType>
class BinarySearchTree {
    private: 
        struct BinaryNode { 
            ItemType element;
            BinaryNode *left;
            BinaryNode *right;
            BinaryNode(const ItemType &theElement, BinaryNode *lt,BinaryNode *rt){
                element = theElement;
                left = lt;
                right = rt;
            };
        };
        BinaryNode *root;
        void insert(const ItemType &x, BinaryNode * &t);
        void remove(const ItemType &x, BinaryNode * &t);
        bool contains(const ItemType &x,BinaryNode * &t);
    public: 
        BinarySearchTree();
        BinarySearchTree(ItemType);
        ItemType &findMax() const;
        ItemType &findMin() const;
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