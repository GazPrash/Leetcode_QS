#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> out;
        for (int k : nums){
            mp[k]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++){
            if (it->second > (nums.size()/2)) out.push_back(it->first);
        }
        
        return out;
    }
};

int main(){
    
    return 0;
}