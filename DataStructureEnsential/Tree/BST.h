#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

class BST { 
    private: 
        Node *root;
    public:
        BST(int item) {
            this->root = new Node(item);
        } 
        void insert(int item) {
            cout << "Hello world" << endl;
            Node *newNode  =  new Node(item);
            Node *holdptr = this->root;
            while (true)
            {
                if(item > holdptr->item) {
                    holdptr->depth ++;
                    if(holdptr -> right == nullptr) {
                        newNode->parent = holdptr;
                        holdptr->right = newNode;
                        return
                    }
                    
                    holdptr = holdptr->right;
                }else if (item < holdptr->item) {
                    holdptr->depth ++;
                    if(holdptr->left == nullptr) {
                        newNode->parent = holdptr;
                        holdptr->left = newNode;
                        return
                    }
                    holdptr = holdptr->left;
                }           
          
            }
        }
        /**
         * @param item:  item find
         * @param newItem:  newItem wanna change
        */
        void update(int item, int newItem) {
            Node *holdptr = this->root;
            while (true)
            {
                if(item > holdptr->item) {
                    holdptr = holdptr->right;
                }else if (item < holdptr->item) {
                   
                    holdptr = holdptr->left;
                }else {
                    holdptr->item = newItem;
                    return;
                }
          
            }
        }
        /** 
         * 
        */
        void deleteItem(int item) {

        }

};