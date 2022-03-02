#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = 0, tsum = 0;
        int minlen = INT_MAX;
        for (int i = 0; i < nums.size()-1; i++){
            len = 0;
            tsum = 0;
            for (int j = i + 1; j < nums.size(); j++){
                cout<<tsum<<"----"<<len<<endl;
                tsum += nums[i];
                len++;
                if (tsum >= target){
                    minlen = min(len, minlen);
                }else {
                    tsum += nums[j];
                    len++;
                    if (tsum >= target)
                        minlen = min(len, minlen);
                }

            }

        }

        if (minlen == INT_MAX) return 0;
        return minlen;
        
    }
};

int main(){
    
    return 0;
}