#include "InCells.h"

InCells::InCells() {
    
    this->storedValue = 0;    
}
int InCells::read() {
    return this->storedValue;
}
void InCells::write(int x) {
    this->storedValue = x;
}