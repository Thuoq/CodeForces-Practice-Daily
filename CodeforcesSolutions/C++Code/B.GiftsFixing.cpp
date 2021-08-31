// Link Problem: https://codeforces.com/problemset/problem/1399/B
#include<iostream>
using namespace std;
int findMinAndInput(int arr[],int n ) {
    int min = 0;
    for(int i = 0; i < n ;i ++) {
        cin >>arr[i];
        if (arr[i] < arr[min] ){
           
            min = i;
        }
    }
    return min;
}
void solution() {
    int _;
    cin >> _;
    int candy[_];
    int orange[_];
    int min_orange_pos = findMinAndInput(orange,_);
    int min_candy_pos = findMinAndInput(candy,_);
  
    long long int result = 0;
    // handle Logic
    for (int i = 0; i  < _ ; i ++) {
        // check is min position; 
        if (i == min_candy_pos || i == min_orange_pos) {
            if(i == min_candy_pos) {
                result = result + orange[i]-orange[min_orange_pos];
            }
            if (i == min_orange_pos) {
                result = result + candy[i]-candy[min_candy_pos];
            }

            continue;
        }
        if(candy[i] - candy[min_candy_pos] > orange[i]-orange[min_orange_pos]) {
            result += candy[i] - candy[min_candy_pos];
        }else {
            result += orange[i] - orange[min_orange_pos];
        }
       
    }
    
    cout << result << endl;
}
int main() {
    int test;
    cin >> test;
    while(test) {
        solution();
        test--;
    }
  
    
}