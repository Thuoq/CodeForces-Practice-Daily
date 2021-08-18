// Link Problem:https://codeforces.com/problemset/problem/1325/A?fbclid=IwAR34yTacg2YefIgmnMTlohTq4K8u7VSNd91Fy3Lh31CHmTFTMLZCChNdso4
#include<iostream>
#include<string>
using namespace std;

int main() {
   
    int y,w; 
    cin >> y >> w;
    const string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int D = max(y, w);
    cout << probability[D] << endl;
    
    
}