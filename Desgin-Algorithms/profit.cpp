#include<iostream>
using namespace std;

int findMaxProfit(int prices[], int N,int &start, int &end)
{
    int n = N;
    int cost = 0;
    int maxCost = 0;
    if (n == 0)
    {
        return 0;
    }

    int min_price = prices[0];
    int temp_start = 0;
    for (int i = 0; i < n; i++)
    {

        // 10 9 11 15 1 3

        // min_prices: 10,
        // min_prices: 10
        // i : 1 => prices[1] = 10
        // 11
        if(min_price > prices[i]) {
            min_price = prices[i]; 
            temp_start = i;
        }
        cost = prices[i] - min_price;

        if(maxCost < cost) {
            maxCost = cost;
            start = temp_start;
            end = i;  
        }
     
    }
    return maxCost;
}

int main()
{
    int N;
    cin >> N;
    int prices[N];
    for (int i = 0 ; i < N ; i ++) {
        int numb;
        cin >> numb;
        prices[i] = numb;
    }

    int start = 0;
    int end = 0;
  
    findMaxProfit(prices, N,start,end);
    if(start == 0 && end == 0) {
        cout << -1;
    }else {
        cout << start << end;

    }
    return 0;
}
