#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    // 1 2 3 4   --->  24 12 8 6
    int pre = 1, post = 1;
    vector<int> out(0, nums.size());

    int loop_pre = 1;
    for (int i = 0; i < nums.size(); i++){
      loop_pre *= pre;
      out[i] = loop_pre;
      pre = nums[i];
    }
    // 1 1 2 6
    // 24 12 8 6

    int loop_post = 1;
    for (int j = nums.size() -1; j >= 0; j++){
      loop_post *= post;
      out[j] *= loop_post;
      post = nums[j];
    }

    return out;
  }
};