// Link Problem :https://codeforces.com/problemset/problem/144/A

#include <iostream>
using namespace std;

int main() {
    int amount_soliders;
    cin >> amount_soliders;
    int numbers[amount_soliders + 1];
    int position_max = 0;
    int position_min = 0;
    for(int i = 0 ; i < amount_soliders;i++) {
        int number;
        cin >> number;
        numbers[i] = number;
        if(numbers[i] > numbers[position_max] && i>position_max) {
            position_max = i;
        }
        if(numbers[i] < numbers[position_min] && position_min <i) {
            position_min = i;
        }
    }
    cout << position_min << " " << position_max;
    // int position_max = amount_soliders-1;
    // int position_min = 0;
    // int max_el = numbers[amount_soliders - 1];
    // int min_el = numbers[0];
    // for(int i = 1 ; i < amount_soliders;i++) {
    //     if (numbers[i] >= max_el) {
    //         if (i < position_max)
    //         {
    //             position_max = i;
    //         }
    //         max_el = numbers[i];
    //     }
    //     if(numbers[i] <= min_el) {
    //         if (i >= position_min) {
    //             position_min = i;
    //         }
    //         min_el = numbers[i];
    //     }
        
    // }
    // if (position_max > position_min)
    // {
    //     cout << (position_max - 1) + (amount_soliders - position_min)-1;
    // }
    // else
    // {
    //     cout << (position_max - 1) + (amount_soliders-position_min);
    // }
}