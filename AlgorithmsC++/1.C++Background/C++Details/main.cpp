#include<iostream>
#include"InCells.h"
using namespace std;
int main() {
    InCells *m;
    m = new InCells();
    m->write(10);
    cout << m->read();
    delete m;
    return 0;
}