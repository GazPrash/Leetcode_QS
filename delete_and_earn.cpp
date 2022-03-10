#include<bits/stdc++.h>
using namespace std;

// i got nothing

class Solution {
public:
    int rec_func(vector<int> &nums, int ind, bool skip){
        if (ind == nums.size()) return 0;
        if (nums[ind] == -1) return rec_func(nums, ind+1, skip);
        if (skip){
            return max(rec_func(nums, ind+1, 1), rec_func(nums, ind+1, 0));
        } else {
            int temp = nums[ind];
            nums[ind] = -1;
            for (int &k : nums){
                if ((k == temp-1) || (k == temp+1)) k = -1;
            }
            return temp + max(rec_func(nums, ind+1, 1), rec_func(nums, ind+1, 0));

        }
    }

    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return max(rec_func(nums, 0, 0), rec_func(nums, 0, 1));

    }
};

int main(){
    
    return 0;
}