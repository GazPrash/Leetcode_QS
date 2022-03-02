#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int robDaHouse(vector<int> & nums,
                   int i, bool rob, 
                   vector<int> &if_robbed, 
                   vector<int> &if_ignored)
    {
        if (i == nums.size()) return 0;
        int out = 0;
        if (rob){
            out += nums[i];

            if (if_robbed[i] != -1){
                return if_robbed[i+1];
            }
            if_robbed[i] = (out + robDaHouse(nums, i+1, 0, if_robbed, if_ignored));
            return if_robbed[i];
        
        }
        else{

            if (if_ignored[i] != -1){
                return if_ignored[i];
            }

            else{
                if_ignored[i] = (max(robDaHouse(nums, i+1, 0, if_robbed, if_ignored), robDaHouse(nums, i+1, 1, if_robbed, if_ignored)));
                return if_ignored[i];
            }


        }


    }

    int rob(vector<int>& nums) {
        vector<int> dp1(nums.size(), -1);
        vector<int> dp2(nums.size(), -1);
        
        return (max(robDaHouse(nums, 0, 0, dp1, dp2), robDaHouse(nums, 0, 1, dp1, dp2)));
        
    }
};

int main(){
    
    return 0;
}