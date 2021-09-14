#include<bits/stdc++.h>
using namespace std;
typedef vector<long long> vi_ll;
typedef vector<vector<long long > > vi_vi_ll;
void solution(vi_vi_ll matrix, int N,int &cnt_test) {
    bool flag = false;
    for(int i = 0; i < N; i++) {
        for(int j = 0 ;j < N-i; j ++) {
            if(matrix[i][j] != matrix[N-i-1][N-j-1]) {
                flag = true;
                break;
            }
        }
        if(flag) {
            break;
        }
    }
    if(flag) {
        cout << "Test #"<<cnt_test << ": " << "Non-symmetric." << endl;
    }else {
        cout << "Test #"<<cnt_test << ": " << "Symmetric." << endl;
    } 
}
int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    int cnt_test =1;
    while(t--) {
        char a;
        char b;
        cin >> a;
        cin >> b;
        int N;
        cin >> N; 
        vi_ll arr(N,0);
        vi_vi_ll matrix(N,arr);
        bool flag = false;
        for(int i = 0; i < N ; i++) {
            for(int j = 0 ;j < N ; j ++) {
                cin >> matrix[i][j];
                if(matrix[i][j] < 0) {
                    flag = true;
                }
            }
        }
        if(flag) {
            cout << "Test #"<<cnt_test << ": " << "Non-symmetric." << endl;
        }else {
            solution(matrix,N,cnt_test);
        }
        cnt_test ++;

        
    }

}