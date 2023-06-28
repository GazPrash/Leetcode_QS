#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    vector<vector<int>> result;
    for (int i = 0; i < nums.size(); i++){
      if (i > 0 && nums[i] == nums[i-1]) continue;

      int a = nums[i];
      int lp = i+1, rp = nums.size()-1;
      while (lp <= rp){
        int tsum = a + nums[lp] + nums[rp];
        if (tsum < 0){
          lp++;
        } else if (tsum > 0){
          rp--;
        } else {
          result.push_back({a, nums[lp], nums[rp]});
          while (nums[lp] == nums[lp] && lp < rp) lp++;
        }
      }

    }
    return result;
  }
};
