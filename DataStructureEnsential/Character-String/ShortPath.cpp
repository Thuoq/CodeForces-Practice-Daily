#include<iostream>
using namespace std;
int main() {
    char directions[1000];
    cin.getline(directions,1000);
    int x =0;
    int y = 0;
    for(int i = 0 ; directions[i] !='\0';  i ++) {
        switch (directions[i]){
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x--;
                break;
            case 'E':
                x++;
                break;
        }
    }
    cout << "Final  x and y is " << x << " " << y;
    return 0;
}