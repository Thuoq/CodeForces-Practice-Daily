#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr(5,100);
    // Size of the vector (No of elements)
    arr.push_back(10); // relocation 
    cout << arr.size() << endl;
    // Fill constructor 
    vector<int> visited(100,0) // (size,val)
    // Capacity of the vector actual size of location
    cout << arr.capacity() << endl;
    return 0; 
}