#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int out = 0;
        for (int i = 0; i < nums.size()-1; i+=2){
            out += nums[i];
        }
        return out;
    }
};

int main(){
    
    return 0;
}