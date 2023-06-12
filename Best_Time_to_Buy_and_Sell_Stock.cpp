#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    int profit = 0, currStock = prices[n-1];

    for(int i = n-2; i >= 0; --i){
        currStock = max(currStock, prices[i]);
        profit = max(profit, currStock - prices[i]);
    }

    return profit;

}