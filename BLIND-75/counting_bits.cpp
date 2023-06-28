#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> countBits(int n)
  {
    vector<int> dp = {0, 1, 1, 2};
    int i = 4, offset = 4;
    int reset = 0;
    while (i < n){
      if (reset == 4){
        reset = 0;
        offset += 4;
      }
      dp[i] = 1 + dp[i - offset];
      reset++;
      i++;
    }
    return dp;
  }
};