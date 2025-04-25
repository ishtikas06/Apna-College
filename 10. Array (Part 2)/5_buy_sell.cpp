#include <iostream>
using namespace std;

void maxProfit(int arr[], int n) //O(n+n) = O(n)
{
    int bestbuy[100000];
    bestbuy[0] = INT_MAX;
    // cout<<bestbuy[0]<<",";
    for(int i = 1; i < n; i++)
    {
        bestbuy[i] = min(bestbuy[i-1], arr[i-1]);
        // cout<<bestbuy[i]<<",";
    }
    int maxProfit = 0;
    for(int i = 0; i < n; i++)
    {
        int curProfit = arr[i] - bestbuy[i];
        maxProfit = max(maxProfit, curProfit);
    }
    cout<<"Max Profit = "<<maxProfit;
}

int main() {
    int price[6] = {7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(int);
    maxProfit(price, n);
return 0;
}