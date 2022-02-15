#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int ind = 0;
    int low = 0, high = nums.size()-1, mid = low + (high -low)/2;

    if (target == nums[low]) return low;
    if (target == nums[high]) return high;

    while (low < high){
        if (target > nums[low] && target <= nums[mid]){
            high = mid - 1;
        } else low = mid + 1;

        if (target < nums[high] && target >= nums[mid]){
            low = mid + 1;
        } else high = mid -1;
    }

    return (nums[mid] == target ? mid : -1);
}



int main(){
    
    return 0;
}