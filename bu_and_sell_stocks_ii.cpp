#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit;
        int min_profit;
        bool bought = false;
        int profit = 0;
        auto it = prices.begin();
        for (int p : prices){
            max_profit = *max_element(it, prices.end());
            min_profit = *min_element(it, prices.end());
            
            if (!bought){
                if (p==min_profit) bought = true;
            }

            if (bought && (p == max_profit)){
                profit += ((max_profit - min_profit));
                bought = false;
            }

            it++;
        
        }

        return profit;
        
    }
};

class Solution2 {
public:
    int rec_func(vector<int> &prices,int index, int profit, bool bought){
        if (index == prices.size()-1){
            if (bought){
                return (profit - prices[index]);
            }

            return profit;
        }
        int a, b;
        if (!bought){
            a = rec_func(prices, index+1, profit-prices[index], 1);
            b = rec_func(prices, index+1, profit, 0);
            profit = max(a, b);
        }

        else{
            a = rec_func(prices, index+1, profit+prices[index], 0);
            b = rec_func(prices, index+1, profit, 1);
            profit = max(a, b);
        }

    }

    int maxProfit(vector<int>& prices) {
        return max(rec_func(prices, 0, 0, 1), rec_func(prices, 0, 0 ,0));

    }

};

int main(){

    vector<int> a = {7,1,5,3,6,4};

    cout<<*max(a.begin(), a.end());
    
    return 0;
}