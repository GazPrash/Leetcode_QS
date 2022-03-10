#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        for (int &k : nums1){
            auto temp = find(nums2.begin(), nums2.end(), k);
            auto it = lower_bound(temp+1, nums2.end(), k+1);
            if (it == nums2.end()){
                k = -1;
            } else k = *it;
        }
        return nums1;
    }
};

int main(){
    
    return 0;
}