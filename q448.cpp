#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> out;
        unordered_map<int, int> stuff;

        for (int k : nums){
            stuff[k]++;
        }

        for (int i = 1; i <= nums.size(); i++){
            if (stuff[i] < 1) out.push_back(i);
        }

        return out;
    }
};

int main(){
    
    return 0;
}