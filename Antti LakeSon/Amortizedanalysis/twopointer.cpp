#include<bits/stdc++.h>

#define clr(x) memset(x, 0, sizeof(x));
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define INF 999; 
#define M 1000000000 + 7;
using namespace std;
class TwoPointer {
    private: 
        int SIZE;
        int *arr;
    public:
        TwoPointer(int SIZE) {
            this->SIZE = SIZE;
            this->arr = new int[SIZE];
            for(int i  = 0 ; i < SIZE ; i ++) {
                cin >> this->arr[i];
            }
            int k;
            
        }
        // SUM 2;
        void SUM2 (int targetSum) {
            sortArr();
            int left = 0;
            int right =  this->SIZE -1;
            while(left < right) {
                int sum = this->arr[left] + this->arr[right];
                if(sum == targetSum) {
                    cout << left << " " << right;
                    return;
                }else if (sum > targetSum) {
                    right --;
                }else {
                    left ++;
                }
            }
        }
        void sortArr() {
            sort(this->arr,this->arr+this->SIZE);
        }
};
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    TwoPointer p(n);
    p.SUM2(8);
}