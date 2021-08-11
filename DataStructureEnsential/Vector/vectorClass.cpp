#include<iostream>
using namespace std;

class Vector {
    // Data memember
    int *arr;
    int cs; // actual size have element
    int ms; // actual memory allocation
    public:
        Vector(int max_size = 1) {
            cs =0;
            ms =max_size;
            arr = new int[ms];
        }
        int capacity() {
            return ms;
        }
        void push_back(int d) {
            // Two case
            // 1: For not overlocattion
            if(cs == ms) {
                // create a new array and delete the old one, double the capacity
                int *oldArr =arr;
                ms = 2*ms;
                arr = new int[ms];
                for(int i  = 0; i < cs ; i ++) {
                    arr[i] = oldArr[i];
                }
                // delete
                delete oldArr;

            }
            arr[cs] = d;
            cs++;
            // 2: for location
        }
        void pop_back() { // remove last_element;
            if(cs >= 0) {
                cs --;
            }
        }
        bool isEmpty() {
            return cs ==0;
        }
        int size() 
        {
            return cs;
        }
        int at(int i ) {
            return arr[i];
        }
        int front() {
            return arr[0];
        }
        int back() {
            return arr[cs-1];
        }
        int operator[](int i) {
            return arr[i];
        }
    
};
int main() {

    Vector v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v[1] << endl;
}