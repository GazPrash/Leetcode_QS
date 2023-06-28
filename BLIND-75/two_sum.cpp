#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> record;
    vector<int> out;
    for (int k = 0; k < nums.size(); k++)
    {
      int diff = target - nums[k];
      if (record.find(diff) != record.end())
      {
        out.push_back(k);
        out.push_back(record[diff]);
        break;
      }
      record[nums[k]] = k;
    }
    return out;
  }
};
