#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int maxArea = -1;
    int lp = 0, rp = height.size() - 1;
    while (lp < rp){
      int area = min(height[lp], height[rp]) * (rp - lp);
      maxArea = max(maxArea, area);
      if (height[lp] < height[rp]) lp++;
      else rp--;
    }
    return maxArea;
  }
};