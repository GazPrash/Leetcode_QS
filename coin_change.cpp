#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rec_func(int csum, 
                 int total_coin, 
                 vector<int> &coins,
                 vector<int> &dp_use,
                 vector<int> &dp_skip,
                 vector<int> &dp_repeat,
                 int tar, int use, int ind)
    {
        
        if (csum == tar){
            return total_coin;
        }

        if ((ind >= coins.size()) || (csum > tar)) return INT_MAX;

        if (use == -1){
            total_coin++;
            csum += coins[ind];
            if (dp_repeat[ind] != -1){
                return dp_repeat[ind];
            }else {
                dp_repeat[ind] = min(min((rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, 1, ind+1)),
                            (rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, 0, ind+1))),
                            (rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, -1, ind)));
            
                return dp_repeat[ind];

            }
        }

        if (use){
            total_coin++;
            csum += coins[ind];
            if (dp_use[ind] != -1){
                return dp_use[ind];
        } else {
            dp_use[ind] = min(min((rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, 1, ind+1)),
                            (rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, 0, ind+1))),
                            (rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, -1, ind)));
            
            return dp_use[ind];
            }
        }

        else{
            if (dp_skip[ind] != -1){
                return dp_skip[ind];
            }else{
                dp_skip[ind] = min(min((rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, 1, ind+1)),
                                   (rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, 0, ind+1))),
                                   (rec_func(csum, total_coin, coins, dp_use, dp_skip, dp_repeat, tar, -1, ind)));
            
                return dp_skip[ind];
            }


        }
        
    }

    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        if (coins.size() == 1){
            return coins[0] == amount ? 1 : -1;
        }

        vector<int> dp(coins.size(), -1);
        vector<int> dp2(coins.size(), -1);
        vector<int> dp3(coins.size(), -1);

        int a = rec_func(0, 0, coins, dp, dp2, dp3, amount, 1, 0);
        int b = rec_func(0, 0, coins, dp, dp2, dp3, amount, 0, 0);
        int c = rec_func(0, 0, coins, dp, dp2, dp3, amount, -1, 0);
        

        int out = min(min(a, b), c);
        
        if (out == INT_MAX) return -1;
        else return out;
        
    }
};



int main(){
    
    return 0;
}