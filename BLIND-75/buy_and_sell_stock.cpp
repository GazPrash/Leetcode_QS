#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int lp = 0, rp = 1, n = prices.size();
    if (n <= 1)
      return 0;
    int profit = INT_MIN;

    while (rp < n)
    {
      if (lp > rp)
      {
        lp = rp;
        rp++;
      }
      profit = max(rp - lp, profit);
      rp++;
    }
  }
};