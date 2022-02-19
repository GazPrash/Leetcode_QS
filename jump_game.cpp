#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums, int i = 0) {
        int jump;

        while (i < (nums.size()-1)){
            jump = nums[i];
            if (jump == 0) return false;
            return (((i+ jump) >= (nums.size()-1)) || (canJump(nums, i-1)));
        }

        return true;
        
    }
};

int main(){
    
    return 0;
}