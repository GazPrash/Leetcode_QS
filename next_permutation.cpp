#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void replacementLoop(vector<int> &nums, int i, int j){
        int minNum = INT_MAX, store_ind_i = -1;
   
        while (i>j){
            if (nums[i] > nums[j]){
                minNum = min(minNum, nums[i]);
                store_ind_i = i;
            }
            i--;
        }
        swap(nums[store_ind_i], nums[j]);
        auto revBegin = nums.begin() + (j-1);
        reverse(revBegin, nums.end());

    }

    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        for (int i = n-1; i >=0; i++){
            int j = i-1;
            while (j >= 0){
                if (nums[i] <= nums[j]){
                    replacementLoop(nums, i, j);
                    return;
                }
                j--;
            }

        }

        
    }
};

int main(){
    
    return 0;
}