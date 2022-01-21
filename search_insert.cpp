#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int> nums, int target){
    long low = 0, high = nums.size()-1;
    while (low<=high){
        int mean = (low+high)/2;

        if (nums[mean] > target){
            high = mean - 1;
        }
        else if (nums[mean] < target)
        {
            low = mean + 1;
        }

        else{
            return mean;
        }
    }

    return low;
}

int main(){
    vector<int> nums = {1,3,5,6};
    cout<<searchInsert(nums, 7);
    return 0;
}