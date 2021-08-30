// Problem: Cho mảng A  gồm N phần tử đánh số từ 1. CÓ Q loại 2 truy vấn 
// * uv: cộng v vào A[u]
// * p: tính tổng các phần tử từ A[1], A[2] , A[3] tới p

#include<bits/stdc++.h>
using namespace std;
#define clr(x) memset(x, 0, sizeof(x));
#define fo(i, n) for(i=0;i<n;i++)
#define fo_1(i,n) for(i = 1 ; i < n ; i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define deba_1(i,a,n) fo_1(i,n){cout << a[i] << " ";}
#define INF 999; 
#define M 1000000000 + 7;
class Preprocesstor{ 
    private:
        int SIZE;
        int *arr;
    public:
        Preprocesstor(int SIZE) {
            this->SIZE =  SIZE + 1;
            this->arr = new int[this->SIZE];
            for(int i  = 1 ; i < this->SIZE ; i ++) {
                cin >> arr[i];
            }
            int k;
            deba_1(k,this->arr,this->SIZE);
        }
        /** GET SUM from [a,b]
         * _0 : for stupid approach;
         *  p: tính tổng các phần tử từ A[1], A[2] , A[3] tới p
         * */
        int getSumFrom_0(int a, int b) {
            int s = 0;
            for(int i = a; i <= b ; i ++) {
                s+=this->arr[i];
            }
            return s;
        }   
        /** cộng v vào A[u]
          tuc la param (u,v) a[u] + v
         * */
        void update_0(int u ,int v) {
            this->arr[u] += this->arr[v];
        }

};
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    Preprocesstor p (n);
}