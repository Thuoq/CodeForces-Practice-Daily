#include<bits/stdc++.h>
#define clr(x) memset(x, 0, sizeof(x));
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define INF 999; 
#define M 1000000000 + 7;
using namespace std;
class BinaryIndexTree { 
    private: 
        int SIZE;
        int *arr;
    public: 
        BinaryIndexTree(int SIZE) {
            this->SIZE = SIZE;
            this->arr = new int[SIZE];
            for(int i  = 0 ; i < SIZE ; i ++) {
                cin >> this->arr[i];
            }
        }
};
int main() {
    cout << "Hello  World" << endl;
}