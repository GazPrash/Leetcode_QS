#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    if (nums.size() <= 1) return nums[0];
    int maxProfit = INT_MIN, maxInd, curProfit = 0;

    // -2 1 -3 4 -1 2 1 -3
    for (int k : nums){
      if (curProfit < 0) curProfit = 0;
      curProfit += k;
      maxProfit = max(curProfit, maxProfit);
    }

    return maxProfit;
  }
};