#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int res = INT_MAX, int csum = 0;

    std::sort(nums.begin(), nums.end()); // sorts in O(logn * n)
    for (int i = 0; i < nums.size(); i++){
        int left = i+1, right = nums.size()-1;

        while (left < right){
            csum = nums[i] + nums[left] + nums[right];

            if (csum < target) left++;
            if (csum > target) right--;

            if (abs(csum-target) < abs(res - target)) res = csum;

        }
    }

    return res;


}

int main(){
    
    return 0;
}