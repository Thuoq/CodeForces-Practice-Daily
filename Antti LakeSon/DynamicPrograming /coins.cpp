#include<bits/stdc++.h>
using namespace std;
#define clr(x) memset(x, 0, sizeof(x));
#define INF 999; 
int min(int x, int y) {
    return x < y ? x : y;
}
void precision(int x) {
    cout.precision(x);
    cout << fixed ;
}
/**
 * BIG O: O(n^n)
*/
int minmumCoinsRecursive(int arr[],int n , int targetNum) {

    if (targetNum < 0) return INF;
    if(targetNum == 0) return 0;
    int best = INF;
    for(int i = 0 ; i < n ; i ++) {
        best = min(best,minmumCoinsRecursive(arr,n,targetNum-arr[i])+1);
    }

    return best;
}
/**
 * BIG O: O(n)
*/
int minmumCoinsMemo(int arr[], int n , int targetNum,int values[] , bool seen[]) {
    // check base case
    if(targetNum < 0) return INF;
    if(targetNum == 0) return 0;
    if(seen[targetNum]) return values[targetNum];
    
    int best = INF;
    for(int i = 0 ;i < n ; i ++) {
        best = min(best,minmumCoinsMemo(arr,n,targetNum-arr[i],values,seen)+1);
    }
    values[targetNum] = best;
    seen[targetNum] = true;
    return best;
}
int minmumCoinsIterative(int arr[],int n , int targetNumber){
    int values[targetNumber];
    clr(values);
    int best;
    for(int i = 1; i <= targetNumber; i ++) {
        values[i] = INF;
        for(int idxCoins = 0 ; idxCoins < n ; idxCoins ++) {
            if(i - arr[idxCoins] >= 0) {
                values[i] = min(values[i] , values[i-arr[idxCoins]]+1);
            }
        }
    }
    return values[targetNumber];
}
int findOptimizer(int arr[],int n , int targetNum) {
    int values[targetNum];
    int first[targetNum];
    clr(values);
    clr(first);
    // Target: 100 
    // 1 2 5 10 20 50
    

    // ================(1)
    // i=1  <= targetNum  = 100
    // idxCoins = 0 < 6; 
    // arr[0->6]
    // i=1  - arr[0->6]=0 >=0  and values[i-arr[0->6]]+1 < values[i]
    // ================(2)
    // i=2  <= targetNum  = 100
    // idxCoins = 0 < 6; 
    // arr[0->6]
    // i=2  - arr[0->6]=0 >=0  and values[i-arr[0->6]]+1 < values[i]
    for(int i = 1 ;i <= targetNum;i++) { 
        values[i] = INF;
        for(int idxCoins = 0 ; idxCoins < n ; idxCoins ++) {
            cout << values[i-arr[idxCoins]]+1 << " " << values[i] << endl;
            if(i - arr[idxCoins] >= 0 and values[i-arr[idxCoins]] + 1 <values[i]) {
                values[i] = values[i-arr[idxCoins]] + 1;
                first[i] = arr[idxCoins];
            }
        }
    }
    while (targetNum > 0)
    {
        cout << first[targetNum] << "\n";
        targetNum-=first[targetNum];
    }

}
void solution(int arr[], int n,int targetNum) {
    
    // this memo ;
 
    int values[10000];
    bool seen[10000];
    //memset(values,0,sizeof(values));
    clr(seen);
    clr(values);
    cout << minmumCoinsMemo(arr,n,targetNum,values,seen) << endl;
    //cout << minmumCoinsRecursive(arr,n , targetNum) << endl;
    cout << minmumCoinsIterative(arr,n,targetNum) << endl;
    findOptimizer(arr,n,targetNum);
}   
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n ;
    cin >> n;
    int arr[n];
    int targetNum;
    cin >> targetNum;
    for(int i = 0; i < n ; i ++) {
        cin >> arr[i];
    }
    solution(arr,n,targetNum);
}