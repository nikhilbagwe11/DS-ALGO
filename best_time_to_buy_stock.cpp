// Best Time to Buy and Sell Stock  = https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// Brute force = Check for every pair
// 2nd approach = fix pointer at 1st index i.e at arr[0]->i=0, and then find the MAX element from i+1 to n and then increment i++ -> TIME COMP. = O(n^2)

// 3rd approach 
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        // INT_MAX is the max value an integer can hold
        int minPrice = INT_MAX;
        int profit =0;
        
        for(int i=0; i<prices.size(); i++){
            
            minPrice = min(prices[i], minPrice);
            profit = max(profit, prices[i] - minPrice);
        }
        return profit;
    }
};
