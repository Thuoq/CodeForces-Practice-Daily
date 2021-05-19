#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
class PriorityQueue {
    private: 
        vector<int> heap;
        bool comparator(int a,int b) {
            return a> b;
        }
        int parent(int idx) {
            return floor((idx-1)/2);
        }
        int child_left(int idx) {
            return idx * 2 + 1;
        }
        int right_child(int idx) {
            return idx* 2 + 2;
        }
        bool compare(int i , int j){
            return this->comparator(this->heap[i],this->heap[j]);
        } 
        void swap(int i , int j) {
            int temp = this->heap[i];
            this->heap[i] = this->heap[j];
            this->heap[j] = temp;
        }
        void shiftUp() {
            int nodeIndex = this->size()-1;
            while(nodeIndex > 0 && this->compare(nodeIndex,this->parent(nodeIndex))) {
                this->swap(nodeIndex,this->parent(nodeIndex));
                nodeIndex = this->parent(nodeIndex);
            }
        }
        void shiftDown() {
            int nodeIdx = 0;
            while((this->child_left(nodeIdx) < this->size() && this->compare(this->child_left(nodeIdx),nodeIdx)) ||
            (this->right_child(nodeIdx) < this->size() && this->compare(this->right_child(nodeIdx),nodeIdx))) {
                int generatorIdx = this->right_child(nodeIdx) < this->size() && this->compare(this->right_child(nodeIdx),nodeIdx)
                ? this->right_child(nodeIdx)
                : this->child_left(nodeIdx);
                this->swap(generatorIdx,nodeIdx);
                nodeIdx = generatorIdx;
            }
        }

    public:
        PriorityQueue(int) {
        }
        int size() {
            return this->heap.size();
        }
        int peek() {
            return this->heap.front();
        }
        bool isEmpty() {
            return this->heap.size() == 0;
        }
        int push(int val) {
            this->heap.push_back(val);
            this->shiftUp();
            return this->size();
        }
        int pop() {
            if(this->size() > 1) {
                this->swap(0,this->size()-1);
            }
            int popVal = this->heap.front();
            this->heap.erase(this->heap.begin());
            return popVal;

        }

    
};