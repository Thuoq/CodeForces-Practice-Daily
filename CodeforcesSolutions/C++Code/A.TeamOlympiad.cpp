// Link problem: https://codeforces.com/problemset/problem/490/A
#include<iostream>
#include<algorithm>
using namespace std;
struct storeds { 
    int num;
    int idx; 
    bool operator < (const storeds& another ) const {
        return num < another.num;
    }
};
int ansStored[5001][3];
int main() {
    int n;
    cin >> n;
    storeds student[n];
    for(int i = 0 ; i < n ; i ++) {
        int _;
        cin >> _;
        student[i].num = _;
        student[i].idx = i+1;
    }
    sort(student,student+n);
    int count = 1;
    int temp = n /3;
    int row = 0;
    while (temp)
    {
        for(int i = 0 ; i < n ; i ++) {
            if(count == student[i].num) {
                ansStored[row][count-1] = student[i].idx;
                count ++;
                student[i].num = 0;
            }
            if (count >3) {
                row+=1;
                count =1;
            }
        }
        temp--;
    }
    // PRINT SOLUTION
    if(row) {
        cout << row << endl;
        for(int i = 0 ;i  < row ; i ++) {
            for(int j = 0 ; j < 3 ;  j ++) {
                cout << ansStored[i][j] << " ";
            }
            cout << "\n";
        }
    }else {
        cout << 0 << endl;
    }
  
   
}   