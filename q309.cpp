#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int max_profit = 0;
    int dfs(vector<int> &prices, vector<int> &dp, int ind, int buy){
        if (ind == prices.size()) return 0;
        if (dp[ind] != -1) return dp[ind];
        
        int local_profit = 0;
        if (buy){
            local_profit += dfs(prices, dp, ind+1, 0) + prices[ind];
            dp[ind] = local_profit;

        } else {
            local_profit += max(
                dfs(prices, dp, ind+1,1),
                dfs(prices, dp, ind+1,0)
            );

            dp[ind] = local_profit;
        }

        return local_profit;
    }

    int maxProfit(vector<int>& prices) {
        vector<int> dp(prices.size(), -1);

        int a = dfs(prices, dp, 0,1);
        int b = dfs(prices, dp, 0,0);

        return max(a, b);
    }
};

int main(){
    
    return 0;
}