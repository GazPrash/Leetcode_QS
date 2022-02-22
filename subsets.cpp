#include<bits/stdc++.h>
using namespace std

;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = (int)pow(2, nums.size());
        vector<vector<int>> out(n, vector<int> (1, 0));

        for (int k : nums){
            // dont involve the number
            vector<vector<int>> temp1 = out;

            // involve the number 
            vector<vector<int>> temp2 = out;
            for (auto &vec : temp2){
                vec.push_back(k);
            }

            temp1.insert(temp1.end(), temp2.begin(), temp2.end());
            out = temp1;
            temp1.clear();
            temp2.clear();
        }
        
        return out;
    }
};

int main(){
    
    return 0;
}