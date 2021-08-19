#include <iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;

struct Tree
{   
    int val;
    Tree *left; // left
    Tree *right; // right h = 2^arr.size()+1;
};
Tree* createNewTree(vi arr,int start,int end) {
    if(start < end) {
        int mid = (start+end) /2;
        Tree *newTree = new Tree();
        newTree->val = arr[mid];
        newTree->left = createNewTree(arr,start,mid);
        newTree->right = createNewTree(arr,mid+1,end);
        return newTree;
    }

}
Tree* makeTree(vi arr) {
    return  createNewTree(arr,0,arr.size()-1);
}

int main () {
    vi arr = {1,2,3,4,5,6,7,8,9};
    Tree 
}