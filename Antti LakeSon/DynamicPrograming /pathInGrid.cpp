#include<bits/stdc++.h>
using namespace std;
// MACROS DEFINITION
#define clr(x) memset(x, 0, sizeof(x));
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define INF 999; 
#define M 1000000000 + 7;
class PathGrid { 
    private: 
        int ROW;
        int COL;
        int **arr;
    public:
        PathGrid(int row, int col) {
            this->arr = new int*[row+1];
            for(int i = 0 ;i < row ; i ++) {
                arr[i] = new int[col+1];
            }
            this->ROW  = row+1;
            this->COL = col+1;
        } 
        void INPUT() {
            for(int i = 1 ; i < this->ROW; i ++) {
                for(int j = 1 ; j < this->COL; j ++) {
                    cin >> arr[i][j];
                }
            }
        }
        void solution(){
            int sum[this->ROW][this->COL];
            clr(sum);

            for(int i = 1 ; i <=this->ROW; i ++) {
                for(int j = 1; j <= this->COL; j ++) {
                    sum[i][j] = max(sum[i-1][j],sum[i][j-1]) + this->arr[i][j];
                }
            }
            for(int i = 0 ; i < this->ROW; i ++) {
                for(int j = 0 ; j < this->COL; j ++) {
                    cout << sum[i][j]  << " ";
                }
                cout << endl;
            }
        }

};
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int r,c;
    cin >> r >> c;
    PathGrid pg(r,c);
    pg.INPUT();
    pg.solution();
}