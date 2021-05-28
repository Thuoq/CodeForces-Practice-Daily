#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int numbers[n];
    for(int i = 0 ; i < n ; i ++) {
        int _;
        cin >> _;
        numbers[i] = _;
    }
    int inc , dec =1;
    for(int i = 1 ; i < n ; i ++ ) {
        if (numbers[i] > numbers[i - 1] && i % 2 != 0)
        {
            inc = dec + 1;
        }

        else if (numbers[i] < numbers[i - 1] && i %2 == 0)
        {
            dec = inc + 1;
        }
    }
    cout << dec << inc << endl;
    cout << max(dec,inc); 
}