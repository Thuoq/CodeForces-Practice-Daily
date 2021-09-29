struct Node { 
    int item;
    Node *parent;
    Node *left;
    Node *right;
    int depth;
    Node(int item) {
        this->item = item;
        this->parent = nullptr;
        this->left = nullptr;
        this->right = nullptr;
        this->depth = 0;
    }
};