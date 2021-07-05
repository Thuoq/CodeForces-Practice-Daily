#include<iostream>
#include"TestScores.h"
using namespace std;
int main() {
    TestScores<int> score_Int(3);
    score_Int.input();
    cout << "Average is " << endl;
    cout << score_Int.average();
}