#include<bits/stdc++.h>
using namespace std;


// In the following soln, use a map<vector, int> instead of a 2D dp
class Solution {
public:
    int total_ways = 0;
    bool dfs(vector<int> &nums, int ind, int csum, int target, bool posve, vector<vector<int>> &dp){
        if (ind >= nums.size()) return 0;

        int local_sum = csum;
        if (posve) local_sum += nums[ind];
        else local_sum -= nums[ind];

        if (target == local_sum){
            dp[ind][local_sum] = 1;
            total_ways++;
            return 1;
        } else {
            if (dp[ind][local_sum] != -1){
            } else {
                dp[ind][local_sum] = (
                    (dfs(nums, ind+1, local_sum, target, 1, dp)) ||
                    (dfs(nums, ind+1, local_sum, target, 0, dp))
                );
            }
        }
        if (dp[ind][local_sum] == 1) total_ways++;
        return dp[ind][local_sum];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size(), vector<int> (target+1, -1));
        dfs(nums, 0, 0, target, 1, dp);
        dfs(nums, 0, 0, target, 0, dp);

        return total_ways;
    }
};

int main(){
    
    return 0;
}