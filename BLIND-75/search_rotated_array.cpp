#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int n = nums.size();
    int low = 0, high = n-1, mid = 0;

    // 3 4 5 1 2
    while (low <= high){
      mid = low + (high -low)/2;
      if (nums[mid] == target){
        return mid;
      } else if (nums[low] == target) return low;
      else if (nums[high] == target) return high;
      if (target > nums[low] && target < nums[mid]){
        high = mid - 1;
      } else if (target > nums[low] && target > nums[mid]) {
        low = mid + 1;
      }
      else if (target < nums[low] && target < nums[mid]){
        low = mid + 1;
      }
      else if (target < nums[low] && target > nums[mid]){
        high = mid - 1;
      }
    }
    if (nums[mid] == target){
      return mid;
    } else if (nums[low] == target) return low;
    else if (nums[high] == target) return high;
  }
};