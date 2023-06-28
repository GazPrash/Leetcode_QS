#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findMin(vector<int> &nums)
  {
    int n = nums.size();
    int low = 0, high = n-1, mid = 0;
    int result = nums[0];

    // 3 4 5 1 2
    while (low <= high){
      if (nums[low] < nums[high]){
        result = min(nums[low], result);
        break;
      }
      mid = low + (high -low)/2;
      result = min(result, nums[mid]);
      if (nums[mid] >= nums[low]){
        low = mid + 1;
      } else {
        high = mid-1;
      }
    }
    return result;
  }
};