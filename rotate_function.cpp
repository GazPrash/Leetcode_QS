#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        vector<int> total(nums.size(), 0);
        int k = 0, iter = 0;
        for (int n : nums){
            for (int i = 0; i < nums.size();i++){
                total[i] += n * k;
                k = (k+1)%nums.size();
            }
            iter++;
            k = iter;
        }

        return *max_element(total.begin(), total.end());

    }
};

int main(){
    
    return 0;
}