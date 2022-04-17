#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dfs_combn(vector<int> &nums, vector<int> &dp, int target, int total_combn){
        if (target == 0) return 1;
        for (int k : nums){
            if (target <= k){
                if (dp[target] != -1) total_combn += dp[target];
                else {
                    dp[target] = dfs_combn(nums, dp, target-k);
                    total_combn += dp[target];
                }
            }
        }
        return total_combn;

    }

    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(nums.size(), -1);
        return dfs_combn(nums, dp, target, 0);
    }
};

int main(){
    
    return 0;
}