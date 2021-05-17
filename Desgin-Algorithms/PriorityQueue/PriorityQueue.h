#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
class PriorityQueue {
    private: 
        vector<int> heap;
        bool comparator(int a, int b) {
            return a > b;
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

    public:
        PriorityQueue();
        int size() {
            return this->heap.size();
        }
        int peek() {
            return this->heap.front();
        }
        bool isEmpty() {
            return this->heap.size() == 0;
        }

    
};