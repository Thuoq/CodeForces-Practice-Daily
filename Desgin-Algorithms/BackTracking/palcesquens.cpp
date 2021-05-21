#include<iostream>

using namespace std;
// n = 8
void placeQueens(int arr[], int rows, int n, int &count_sol);
int main() {
    int arr[100];
    int count_sol = 0;
    placeQueens(arr, 0, 8, count_sol);
    cout << count_sol << endl;
}
void placeQueens(int arr[], int rows, int n,int &count_sol)
{
    if (rows == n) {
        for(int i = 0 ; i < rows ;i ++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        count_sol++;
    }else {
        for(int j = 0; j < n ; j ++) {
            bool legal = true;
            // Check dinalog and right side
            for(int i = 0 ; i < rows; i ++) {
                if(arr[i] == j + 1 || arr[i] == j+1+rows-i || arr[i] == j-rows +1+i) {
                    legal = false;
                }
            }
            if (legal) {
                arr[rows] = j+1;
                placeQueens(arr, rows + 1, n, count_sol);
            }
        }
    }
}