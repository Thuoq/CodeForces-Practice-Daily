#include<iostream>
using namespace std;

template<typename Object>
class MemoryCell { 
    private: 
        Object storedValue;
    public: 
        const Object & read() const {
            return storedValue;
        }
        void write(const Object &x) {
            storedValue = x;
        }
};

int main() {
    MemoryCell<int> mc;
    mc.write(100);
    cout << mc.read();
}