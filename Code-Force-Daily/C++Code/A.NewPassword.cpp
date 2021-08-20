#include<iostream>
using namespace std;
char characters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout)
    int n,k;
    cin >> n >> k;
    string ans ="";
    for(int i = 0 ; i < k; i++) {
        ans +=characters[i];
    }
    // handle duplicates;
    // deficient is số num còn thiếu;
    int deficient = n -k;
    for(int i = 0 ; i < deficient; i ++ ) {
      
        ans +=ans[i];
    }
    cout << ans << endl;
}