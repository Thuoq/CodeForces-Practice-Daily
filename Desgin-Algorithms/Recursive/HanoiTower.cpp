// LE VAN THUONG A36311
#include <iostream>
// #include <cmath>
using namespace std;
// void 

/*
--
---
*/
void hanoi(int n,char from,char to ,char middle) {
    if(n > 0 ) {
        hanoi(n-1,from,middle,to);
        cout << "Move disk " << n << " From " << from << " To " << to << endl;
        hanoi(n-1,middle,to,from);
    }
}
int main()
{
    int n;
    cout << "Nhập vào số đĩa: "; 
    cin >> n ;
    hanoi(n,'A','C','B');

    // 4:
    // A        B        C
    // 3                 1
    // 
}