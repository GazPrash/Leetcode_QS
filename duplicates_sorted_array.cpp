#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastnum, lastind;

        for (int i = 0; i < nums.size()-1; i++){
            if (i == 0){
                lastnum = nums[i];
                continue;
            }

            if (lastnum == nums[i]){
                nums[i] = nums[i+1];
                lastind;
            }
            lastnum = nums[i];
            
        }
        return lastind;
    }
};

//  1 2 2 3 3 3 3 4 4

int main(){
    
    return 0;
}