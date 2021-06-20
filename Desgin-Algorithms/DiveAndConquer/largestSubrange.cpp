#include <iostream>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// [1,2,4,5]
int leftMiddleMaxRange(int arr[], int left, int middle)
{
    int maxsum = 0;
    int sum = 0;
    for (int i = left; i <= middle; i++)
    {
        sum += arr[i];
        if (sum > maxsum)
        {
            maxsum = sum;
        }
    }
    return maxsum;
}
int rightMiddleMaxRange(int arr[], int middle, int right)
{
    int maxsum = 0;
    int sum = 0;
    for (int i = middle; i <= right; i++)
    {
        sum += arr[i];
        if (sum > maxsum)
        {
            maxsum = sum;
        }
    }
    return maxsum;
}
int maxSub(int arr[], int left, int right)
{
    if (left == right)
    {
        return arr[left];
    }
    int middle;
    middle = (left + right) / 2;
    int maxL = maxSub(arr, left, middle);
    int maxR = maxSub(arr, middle + 1, right);
    int maxM = leftMiddleMaxRange(arr, left, middle) + rightMiddleMaxRange(arr, middle + 1, right);
    return max(max(maxR, maxL), maxM);
}
int maxDynamic(int arr[],int N) {
    int ans  = arr[0];
    int e = arr[0];
    for (int i = 1 ; i < N ; i ++) {
        e = max(arr[i], e + arr[i]);
        ans = max(ans , e);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);
    cout << maxDynamic(arr,n) << endl;
    cout << maxSub(arr, 0, n - 1);
    return 1;
}