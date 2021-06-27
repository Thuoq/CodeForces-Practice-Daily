#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    // Left value; // Left value referrece
    vector<string> arr(4);
    const int x = 2;
    int y ;
    int z = x + y;
    string str = "foo";
    vector<string> *ptr = &arr;
    // Right is 2 , "foo", " x + y "
    // Right Value vaue referrece
    string &&bad = "dasdsa";
    // Lvalue using use : #2 range for loops:
    for (auto &x : arr)
        ++x;
    // Lvalue avoid coppy
    return 0;
}