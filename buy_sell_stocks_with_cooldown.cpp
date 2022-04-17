#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    enum mode{
        buy_stock,
        sell_stock,
    };

    int max_profit = 0;

    int dfs_rec(vector<int> & prices ,
                 vector<int> &buy, 
                 vector<int> &sell, 
                 bool cd,
                 int ind,
                 int profit,
                 mode task
                 )
    {
        if (ind >= prices.size()){
            max_profit = max(max_profit, profit);
            return profit;
        }

        if (cd){
            return (dfs_rec(prices, buy, sell, 0, ind+1, profit, task));
        }

        if (task == buy_stock){
            if (buy[ind] != -1){
                max_profit = max(max_profit, (profit + buy[ind]));
                return buy[ind];

            }

            profit -= prices[ind];
            task = sell_stock;
            buy[ind] = dfs_rec(prices, buy, sell, 0, ind+1, profit, task);
            return buy[ind];
        } else {
            if (sell[ind] != -1) {
                max_profit = max(max_profit, (profit + sell[ind]));
                return sell[ind];
            }

            profit += prices[ind];
            task = buy_stock;
            sell[ind] = dfs_rec(prices, buy, sell, 1, ind+1, profit, task);
            return sell[ind];
        }

    }

    int maxProfit(vector<int>& prices) {
        vector<int> dp1(prices.size(), -1);
        vector<int> dp2(prices.size(), -1);
        mode task = buy_stock;
        dfs_rec(prices, dp1, dp2, 0, 0, 0, task);

        return max_profit;
    }
};


int main(){
    
    return 0;
}