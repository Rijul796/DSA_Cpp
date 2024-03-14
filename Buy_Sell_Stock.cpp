#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;

        int minPrice = prices[0];
        int maxProfit = 0;

        int n=prices.size();
        for (int i = 1; i < n; i++) 
        {
            if (prices[i] < minPrice) {
                minPrice = prices[i]; 
            } 
            else 
            {
                int profit = prices[i] - minPrice;
                if (profit > maxProfit) 
                {
                    maxProfit = profit;
                }
            }
        }
        return maxProfit;
        }
int main()
{
    vector<int>v={1,3,5,2,5,4};
    cout<<maxProfit(v);
    return 0;
}