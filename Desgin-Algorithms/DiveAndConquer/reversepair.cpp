// Problem : vs ( i < j ) => ai > aj
// Problem : vs (i < j ) => ai > 2*aj
#include<iostream>
using namespace std;
typedef long long ll;
ll _mergeSort(ll arr[], ll temp[], ll left, ll right);
ll merge(ll arr[], ll temp[], ll left, ll mid,
          ll right);
ll mergeSort(ll arr[], ll array_size)
{
    ll temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}


ll _mergeSort(ll arr[], ll temp[], ll left, ll right)
{
    ll mid, inv_count = 0;
    if (right > left)
    {
      
        mid = (right + left) / 2;

        
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

     
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}


ll merge(ll arr[], ll temp[], ll left, ll mid,
          ll right)
{
    ll i, j, k;
    ll inv_count = 0;

    i = left; /* i is index for left subarray*/
    j = mid;  /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            inv_count = inv_count + (mid - i);
            j++;
        }
        k++;
    }


    while (i <= mid - 1)
        temp[k++] = arr[i++];


    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int main() {
    ll n ;
    cin >> n;
    ll numbers[n];
    for(ll i = 0 ; i < n ; i ++) {
        ll _;
        cin >> _;
        numbers[i] = _;
    }
    cout << mergeSort(numbers, n);
}