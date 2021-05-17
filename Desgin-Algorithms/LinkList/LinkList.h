#include<iostream>
#include<string>
using namespace std;
#include "Node.h"
class LinkList
{
private:
    node *head,*tail;
    int length;
    node *insert(int n,int idx)
    {
        node *tmp = new node;
        tmp ->data = n;
        tmp ->next = NULL;
        node *root = head;
        int temp = 0;
        while(temp != idx -1) {
            root = root ->next;
            temp ++;
        }
        node *hold_pointer = root->next;
        root->next = tmp;
        tmp ->next = hold_pointer;
        this->length ++;
        return tmp;
    }

public:
    LinkList() {
        head = NULL;
        tail = NULL;
        length = 0;
    }
    bool isNull() {
        return !this->length;
    }
    node* push_front(int val) {
        node *currentNode = new node;
        currentNode -> data = val;
        currentNode -> next = NULL;
        if(this->isNull()){
            this->head = currentNode;
            this->tail = currentNode;
        }else {
            currentNode->next = this->head;
            this->head = currentNode;
        }
        this->length ++;
        return currentNode;
    }
    node* push_back(int n) {
        node *currentNode = new node;
        currentNode->data = n;
        currentNode->next = NULL;
        if(this->head == NULL) {
            this->head = currentNode;
            this->tail = currentNode; 
        }else {
            this->tail->next = currentNode;
            this->tail = this->tail->next;
        }
        this->length ++;
        return currentNode;
    }
   
    node* insert_node(int n , int idx){
        try {
            if(idx > this->length || idx < 0) {
                throw "Index invalid";
            }else if(idx == 0) {
                return this->push_front(n);
            }else if (idx == this->length ) {
                return this ->push_back(n);
            }else {
                return this->insert(n,idx);
            }

        }
        catch (const char *error)
        {
            cout << error;
        }
    }
    node* delete_node(int val) {
        try {
            node *root = this->head;
            if(val == root->data) {
                this->head = root->next;
                delete root;
                this->length --;
                return root;
            }
            if(val == tail->data) {
                int temp = 0;
                node *root = this->head;
                while(temp != this->length - 2) {
                    temp ++;
                    root = root -> next;
                }
                this->tail = root;
                root->next = nullptr;
                return root;
            }
            while(root != NULL) {
                if(root->next->data == val) {
                    break;
                }
                root = root ->next;
            }
            node *holdleft = root;
            node *holdright = root->next->next;
            delete root->next;
            holdleft->next = holdright;
            return root->next;

        }catch(const char* error) {
            cout << error;
        }

    }
    void display_element() {
        node *head = this->head;
        while(head != NULL){
            cout << head->data << " ";
            head = head->next;
        }
    }
};

