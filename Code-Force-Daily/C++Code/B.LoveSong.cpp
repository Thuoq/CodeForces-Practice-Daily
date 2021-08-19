#include<iostream>
#include<string>
#include<cstring>

using namespace std;

void solution(int n, int q,string song) {
    int count_char[n][26];

    // Init zeros all zeros
    memset( count_char, 0, sizeof(count_char) );
    count_char[0][song[0]-'a'] = 1;
    // đếm các số lần lặp lại vào trong grid
    for(int i = 1; i < n ; i ++) {
        count_char[i][song[i]-'a'] = 1;
        for(int j = 0 ; j < 26; j ++) {
            count_char[i][j] += count_char[i-1][j];
        }
    } 
  

    for(int case_test = 0 ; case_test< q; case_test ++) {
        int ans = 0;
        int left,right;
        cin >> left >> right;
        // phù hợp cho với cái mảng index = 0;
        left--; // top ở gird
        right--; // bottom ở gird 
        for(int i = 0 ; i < 26;i ++) {
            int now = count_char[right][i];
            if(left !=0) {
                now-= count_char[left-1][i]; // trừ đi những phần tử đếm thứ left;
            }
            // tính theo đề bài
            ans += now * (i+1);
        }
        cout << ans << "\n";
    }
}

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    int n,q;
    
    string song;
    cin >> n >> q >> song;
    solution(n,q,song);
}