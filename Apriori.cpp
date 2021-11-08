#include<bits/stdc++.h>

using namespace std;
double EPS = 1e-9;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int N; 
    cin >> N;
    char I[N];
    for(int i = 0 ; i < N ; i ++) {
        cin >> I[i];
    }
    int row,col;
    cin >> row >> col;

    char DB[row][col];
    for(int i = 0 ; i< row ; i ++) {
        for(int j  = 0 ; j < col ; j ++) {
            cin >> DB[i][j];
        }
    }
    double minsup;
    cin >> minsup;

     
    
}