#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int ct = 0, temp = 0;
            int i = 0;
            for (auto k : nums){
                if (k == 1) temp++;
                if (i == nums.size() - 1){
                    ct = max(ct, temp);
                    break;
                }
                
                else if (k != 1) {ct = max(temp, ct); temp = 0;}
                i++;
            }
            
            return ct;
        }

};

int main(){
    
    return 0;
}