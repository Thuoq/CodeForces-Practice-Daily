#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char a[] = {'a','b','c','d','e','h','e','a','k','j','b','\0'};
    
    cout << a << endl;
    cout << strlen(a) << endl; // number of visible characters;
    cout << sizeof(a) << endl;  // + 1 because it add null characters
    
}