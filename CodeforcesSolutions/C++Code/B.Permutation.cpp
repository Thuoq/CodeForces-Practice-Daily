#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    int arr[n];
    // Init seen;
    int seen[5001] = {}; 
    for(int i =0 ; i < n ; i ++) {
        cin >> arr[i];
        seen[arr[i]] =1;
    }
    // How WRONG ! n +1 avoid: case arr[i] > n;
    cout << count(seen+1,seen+n+1,0) << endl;
}