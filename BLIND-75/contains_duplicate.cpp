#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    unordered_set<int> record;
    for (int k : nums){
      if (record.find(k) != record.end()){
        return true;
      }
      record.insert(k);
    }
    return false;
  }
};