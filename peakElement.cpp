#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        if (nums.size() == 2){
            return nums[0] > nums[1] ? 0 : 1;
        }
        
        int l = 0, h = nums.size()-1;
        int m1, m2;

        while (l < h){
            m1 = l - (l-h)/2;
            m2 = m1 +1;

            if (nums[m1] < nums[m2]){
                l++;
            } else h--;

        }

        return nums[m1];
        
    }
};

int main(){
    
    return 0;
}