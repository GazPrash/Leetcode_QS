#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1, h = nums.size()-1, m, cnt = 0;

        while (l <= h){
            m = l - (l-h)/2;
            cnt = 0;
            for (int k : nums){
                if (m <= k) cnt++;
            }
            if (cnt <= m) l = m + 1;
            else h = m - 1;
        }

        return m;
    }

};

// Alternate soln | This will fail because nums can repeat more than one times

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unsigned long long n = nums.size();
        unsigned long long expected_sum = ((n+1) * n) / 2, actual_sum = 0;

        for (int k : nums){
            actual_sum += k;
        }

        return actual_sum - expected_sum + n;
    }

};

int main(){
    
    return 0;
}