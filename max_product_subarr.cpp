#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rec_func(vector<int> &nums, int ind, int last_used, int prod, vector<int> &dp1, vector<int> &dp2){
        if (ind >= nums.size()) return prod;
        if (last_used){
            int a, b;
            if (dp1[ind] != -1){
                a = dp1[ind];
            } else a = rec_func(nums, ind+1, 1, nums[ind]*prod,dp1, dp2);

            if (dp2[ind] != -1){
                b = dp2[ind];
            } else b = rec_func(nums, ind+1, 0, nums[ind]*prod, dp1, dp2);

            prod = max(a, b);
            return prod;
        } 
        else {
            int a, b;
            if (dp1[ind] != -1){
                a = dp1[ind];
            } else a = rec_func(nums, ind+1, 1, nums[ind],dp1, dp2);

            if (dp2[ind] != -1){
                b = dp2[ind];
            } else b = rec_func(nums, ind+1, 0, nums[ind], dp1, dp2);

            prod = max(a, b);
            return prod;
        }

    }

    int maxProduct(vector<int>& nums) {
        vector<int> dp1(nums.size(), -1);
        vector<int> dp2(nums.size(), -1);

        int out = max(max(
            rec_func(nums, 1, 1, nums[0], dp1, dp2),
            rec_func(nums, 1, 0, nums[0], dp1, dp2)
        ), nums[0]);

        return out;

        
    }
};

int main(){
    
    return 0;
}