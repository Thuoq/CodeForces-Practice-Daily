#include<iostream>
#include<queue>
#include"Tree.h"
using namespace std;
class BinaryTree
{
private:
    tree *root;
    /* data */
    tree *insert_recursive(tree *pointer,int val) {
        if(pointer == NULL) {
            
            return this->createNewNode(val);
        }
        if(val < pointer->data) {
            pointer->left = insert_recursive(pointer->left, val);
        }else {
            pointer->right = insert_recursive(pointer->right, val);
        }
        
        return pointer;
    }
public:
    BinaryTree()
    {
        root = NULL;
    }
    tree * createNewNode(int val) {
        tree * newNode = new tree;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->data = val;
        return newNode;
    }
    tree *insert(int val)
    {
        if(!this->root) {
            
            return this->root = this->createNewNode(val);
        }
        return insert_recursive(this->root,val);
        // tree* newNode = this->createNewNode(val);
        // if(this->root == NULL) {
        //     this->root = newNode;
        //     return this->root;
        // }
        // 1: Option1: < root->val;
        // 2: Option2: > root->val;
        // Recursion at here;
    }
    tree *insert_interation(int val) {
        if(!this->root) {
            return this->root = this->createNewNode(val);
        }
        tree* currentNode = this->root;
        tree* newNode = this->createNewNode(val);
        while (true)
        {
            if(val < currentNode->data) {
                if(!currentNode->left) {
                    currentNode->left = newNode;
                    return newNode;
                }
                currentNode = currentNode->left;
            }else {
                if(!currentNode->right) {
                    currentNode->right = newNode;
                    return newNode;
                }
                currentNode = currentNode->right;
            }
        }
    }
    
    void bfs(){
        // int values[100];
        queue<tree *> qq;
        tree *currentNode = this->root;
        qq.push(currentNode);
        while(qq.size()) {  
            tree *node = qq.front();
            qq.pop();
            cout << node->data << " ";
            if (node->left)
            {
                qq.push(node->left);
            }
            if (node->right)
            {
                qq.push(node->right);
            }
        }
    }    
    void dfs_inOrder(tree* root){
        
        if(root->left) {
            this->dfs_inOrder(root->left);
        }
        cout << root->data << " ";
        if(root->right) {
            this->dfs_inOrder(root->right);
        }
    }
    void dfs_preOrder(tree * root) {
        cout << root->data << " ";
        if (root->left)
        {
            this->dfs_preOrder(root->left);
        }
        if (root->right)
        {
            this->dfs_preOrder(root->right);
        }
    }
    void dfs_postOrder(tree *root)
    {
        if (root->left)
        {
            this->dfs_postOrder(root->left);
        }
        if (root->right)
        {
            this->dfs_postOrder(root->right);
        }
        cout << root->data << " ";
    }

    void dfs() {
        dfs_inOrder(this->root);
        cout << endl;
        dfs_postOrder(this->root);
        cout << endl;
        dfs_preOrder(this->root);
    }
};

