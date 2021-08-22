#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;

void merge(vi &arr,int s, int e,int &num) {
    int i = s;
    int mid = (s+e)/2;
    int j = mid+1;
    vi temp;
    while (i <= mid && j <=e) {
        if(arr[i] < arr[j]) {
            i++;
            temp.push_back(arr[i]);
        }else {
            temp.push_back(arr[j]);
            num+=(j-i)
            j++;
        }
    };
    while (i <= mid)
    {
        temp.push_back(arr[i++]);

        /* code */
    }
    while (j <= e) 
    {
        temp.push_back(arr[j++]);
        /* code */
    }
    int k =0;
    for(int idx = s ; idx <= e; idx ++) {
        arr[i] = temp[k++];
    }
    
    
}
void mergeSort(vi &arr, int s , int e,int &num) {
    if(s < e ) {
        int mid = (s+e) /2;
        mergeSort(arr,s,mid,num);
        mergeSort(arr,mid+1,e,num);
        return merge(arr,s,e,num);
    }
}
void solution(vi arr) {
    int num = 0;
    mergeSort(arr,0,arr.size()-1,num);
    cout << num << endl;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // int test;
    // cin >> test;
    
    // while (test--)
    // {
    //     int n;
    //     cin >> n;
    //     vi arr(n);
    //     for(auto &el: arr) {
    //         cin >> el;
            
    //     }
    //     solution(arr);
    //     /* code */
    // }
    int n, a, appear[5001] = {0};
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a <= n)
        {
            appear[a] = 1;
        }
    }
    cout << count(appear + 1, appear + n + 1, 0) << endl;
   
}