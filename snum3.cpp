#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> keep;
        vector<int> out;
        for (int k : nums){
            keep[k]++;
        }

        for (auto it = keep.begin(); it != keep.end(); it++){
            if (out.size() == 2) return out;
            if ((it->second) == 1) out.push_back(it->first);
        }

        return out;
        
    }
};

int main(){
    
    return 0;
}
