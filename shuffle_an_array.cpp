#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arr;
    vector<int> shflarr;
    unordered_set<int> indices;
    Solution(vector<int>& nums) {
        arr = nums;
        shflarr = nums;
        for (int i = 0; i < arr.size(); i++){
            indices.insert(i);
        }
    }
    vector<int> reset() {
        return arr;
    }
    vector<int> shuffle() {
        auto tempset = indices;
        for (int i = 0; i < arr.size(); i++){
            int new_ind = rand()%arr.size();
            swap(shflarr[i], shflarr[new_ind]);
            tempset.erase(new_ind);
        }
        return shflarr;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */

int main(){
    
    return 0;
}