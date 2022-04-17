#include<bits/stdc++.h>
using namespace std;


// sliding window approach with 3 pointers
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) return {};
        
        set<vector<int>> outSet;
        vector<int> temp;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size()-1; i++){
            int j = i+1, k = nums.size()-1, csum = 0;

            while (j < k){
                csum = nums[i] + nums[j] + nums[k];

                if (csum == 0){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    outSet.insert(temp);
                    temp.clear();
                    k--;
                    j++;
                } else if (csum > 0){
                    k--;
                } else j++;

            }

        }
        vector<vector<int>> out(outSet.begin(), outSet.end());
        return out;

    }
};

int main(){
    
    return 0;
}