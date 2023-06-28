#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProduct(vector<int> &nums)
  {
    // important test cases
    // 2 3 -2 4
    // -2 0 1
    // 3,-1,4
    vector<vector<int>> minmax(nums.size(), {0, 0});
    if (nums.size() <= 1) return nums[0];
    int pre, post;
    for (int i = 0; i < nums.size()-1; i++){
      pre = nums[i];
      post = nums[i+1];

      if (i == 0){
        minmax[i] = {pre, pre};
      }
      int a, b;
      if (pre == 0){
        a = 1 * post;
        b = 1 * post;
      }
      else {
        a = minmax[i][0] * post;
        b = minmax[i][1] * post;
      }
      minmax[i+1][0] = min(min(a, b), post);
      minmax[i+1][1] = max(max(a, b), post);
    }

    int finalout = INT_MIN;
    for (int i = 0; i < minmax.size(); i++){
      finalout = max(minmax[i][1], finalout);
    }
    return finalout;
  }
};