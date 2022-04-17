#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if ((nums.size() == 1)) return {nums[0]};

        unordered_map<int, int> m;
        for (int k : nums) m[k]++;
        vector<vector<int>> frq_bucket(nums.size() + 1);

        for (auto it : m){
            frq_bucket[it.second].push_back(it.first);
        }
        vector<int> out;
        for (int i = frq_bucket.size() -1; i >=0; i--){
            if (frq_bucket[i].size() == 0) continue;
            if (k == 0) break;
            for (int j : frq_bucket[i]) {out.push_back(j); k--;}
        }

        return out;
    }
};


int main(){
    
    return 0;
}