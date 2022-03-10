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

int main(){
    
    return 0;
}