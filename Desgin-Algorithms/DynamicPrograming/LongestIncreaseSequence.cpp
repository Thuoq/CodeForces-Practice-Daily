// #include<iostream>
// using namespace std;
// int longestIncreaseSequenceRecursive(int arr[],int n,int &refMax) {
//     // base case
//     if(n == 0){
//         return 1;
//     }
//     int maxTemp =0;
//     for(int i = 0 ; i < n ; i ++) {
//         int res = longestIncreaseSequenceRecursive(arr,i,refMax);
//         if (arr[i - 1] < arr[n - 1] && res + 1 > maxTemp)
//         {
//             maxTemp = res + 1;
//         }
//     }
//     if(refMax < maxTemp) {
//         refMax = maxTemp;
//     }   

//     return refMax;
// }
// int longestIncrease(int arr[],int n) {
//     int maxLength = 1;
//     longestIncreaseSequenceRecursive(arr,n,maxLength);
//     return maxLength;
// }

// int main (){
//     int n;
//     cin >> n;
//     int numbers[n];
//     for(int i = 0 ; i < n ; i ++) {
//         int _ ;
//         cin >> _;
//         numbers[i] =_;
//     }
//     cout << longestIncreaseSequenceIter(numbers,n);
// }
