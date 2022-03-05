#include<bits/stdc++.h>
using namespace std;

// Example : [10,9,2,5,3,7,101,18]
// Solution using built-in lower_bound func for vector | GeeksForGeeks approach

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> vec;
        for (int i = 0; i < nums.size(); i++){
            auto it = lower_bound(vec.begin(), vec.end(), nums[i]);
            if (it == vec.end()) vec.push_back(nums[i]);
            else {
                *it = nums[i];
            }
        }

        return vec.size();

    }
};

// Custom | Accepted | Beats 70%
// Example Test Case : 10, 19, 25, 2, 316 

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> out;
        bool append = 1;
        out.push_back(nums[0]);
        
        for (int i = 1; i < nums.size(); i++){
            for (auto &k : out){
                if (k >= nums[i]){
                    k = nums[i]; 
                    append = 0;
                    break;
                }
            }
            if (append){
                out.push_back(nums[i]);
            } else append = 1;
       
        }

        return out.size();

    }
};

int main(){
    Solution s;
    vector<int> v = {10,9,2,5,3,7,101,18};
    s.lengthOfLIS(v);
    
    return 0;
}