#include<iostream>
bool findStateWin(int horace[], int vera[],int n) {
    int count_h = 0;
    int count_v = 0;
    for(int i = 0 ; i < n ; i ++) {
        if(horace[i] ==n) {
            count_h++;
        }
        if (vera[i] == n) {
            count_v++;
        }
    }
    return count_h > count_v;
}
bool playAnyGame(int horace[],int vera[],int state,int n) {
    for(int i = 0 ; i < n ; i ++) {
    
    }
    for (int i = 0; i < n; i++)
    {
        if (state == horace[i] && state == n)
        {
            return true;
        }
    }
}
int main() {
    int n;
    
}