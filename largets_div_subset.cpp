#include<bits/stdc++.h>
using namespace std;


// 1 2 14 7 28 49 88
// 1 2 7 14 28 49 88
// ^ ^

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int lo = 0, hi = 1, n = 1, max_n = INT_MIN;
        sort(nums.begin(), nums.end());

        vector<vector<int>> out;
        vector<int> temp;
        int last_hi = nums[lo];

        while (lo < nums.size()){
            temp.push_back(nums[lo]);
            last_hi = nums[lo];
            hi = lo+1;
            while (hi < nums.size()){
                if (last_hi%nums[hi] == 0 || nums[hi]%last_hi == 0){
                    cout<<lo<<"----"<<hi<<endl;
                    temp.push_back(nums[hi]);
                    n++;
                    if (hi+1 == nums.size()){
                        max_n = max(n, max_n);
                        out.push_back(temp);
                        break;
                    }
                }
                else {
                    out.push_back(temp);
                    max_n = max(max_n, n);
                    n = 1;
                    temp.clear();
                    continue;
                }
                last_hi = hi;
            }
            lo++;

        }

        for (auto vec : out){
            if (vec.size() == max_n) return vec;
        }

        return {};
    }
};
int main(){
    
    return 0;
}