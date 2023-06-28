#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int hammingWeight(uint32_t n)
  {
    // n) 1100   ---> How many 1 bits???
    // n = n & (n-1)  ---> 1100 & (1011) ---> 1000 (removed one 1 bit!)
    int one_bit = 0;
    while (n > 0){
      n = n & (n-1);
      one_bit++;
    }
    return one_bit;
  }
};