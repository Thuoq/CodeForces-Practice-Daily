#include<iostream>

using namespace std;

int main() {
    int n ;
    cin >> n;
    int NUMBERS[n];
    for(int i = 0 ; i < n ; i ++) {
        int num; 
        cin >> num;
        NUMBERS[i] =num;
    }
    int left = 0;
    int right = n-1;
    while(left <= right) {
        int middle = (left + right) / 2;
        if(NUMBERS[middle] > NUMBERS[middle-1] && NUMBERS[middle] > NUMBERS[middle +1]) {
            cout << middle + 1;
            break;
        }else if (NUMBERS[middle] < NUMBERS[middle-1] && NUMBERS[middle] > NUMBERS[middle+1]) {
            right = middle -1;
            
        }else {
            left = middle +1;
        }
    }
}
// TEST CÁIE 7
//2 4 6 8 7 5 3

// TEST CASE 6
// 2 4 6 5 3 1 0