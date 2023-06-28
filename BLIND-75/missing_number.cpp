#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    int n = nums.size();
    int main_sum = ((n) * (n+1))/2;
    int num_sum = 0;
    for (int k : nums) num_sum += k;
    return main_sum - num_sum;
  }
};