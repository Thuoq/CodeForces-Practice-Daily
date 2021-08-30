#include<bits/stdc++.h>
#define clr(x) memset(x, 0, sizeof(x));
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define INF 999; 
#define M 1000000000 + 7;
using namespace std;
/**
 *   // Typical range queries are:
 *   //sum[a,b]
 *   //min[a,b]
 *   //max[a,b]
*/
class RangeQueries{
    private:
        int SIZE;
        int *arr;
        int *arrPrefix; // this array for sum prefix

    public:
        RangeQueries(int SIZE) {
            this->SIZE = SIZE;
            this->arr = new int[SIZE];
            for(int i  = 0 ; i < SIZE ; i ++) {
                cin >> this->arr[i];
            }
        }
        /**
         *   Sum from  sum[a,b]
         * 
        */
        int SumQueries(int a, int b ) {
            int s = 0;
            for(int i  = a; i <= b ; i ++) {
                s+=this->arr[i];
            }
            return s;
        }
        /** Static Queries
         * Sum prefix arr;
         * Index:  0 1 2 3 4   5  6  7 
         * Input:  1 3 2 5  1  1  2  3
         * Output: 1 4 6 11 12 13 15 18
        */
        void createSumPrefix() {
            for(int i = 0 ;i < this->SIZE ; i ++ ){
                int sum = 0;
                for(int j = 0 ; j <= i ; j ++) {
                    sum+= this->arr[j];
                }
                this->arrPrefix[i] = sum;
            }
            // Check methods is right
            // int k;
            // deba(k,this->arrPrefix,this->SIZE);
            // cout << endl;
        }
        /**
         * SumQueriesPrefix
         * At the Array prefix
         * sum[3->6] = sum[0,b] - sum[0,a-1] 
         * ADVANCED: có thể làm 2 chiều để tính tổng của 1 hình chữ nhật lun
        */
            
        int sumQueriesPrefix(int a ,int b) {
            return this->arrPrefix[b] - this->arrPrefix[a-1];
        }

};
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n ;
    cin >> n;
    RangeQueries rq(n);
    cout << rq.SumQueries(0,3) << endl;
    rq.createSumPrefix();
    cout << rq.sumQueriesPrefix(3,6);

}