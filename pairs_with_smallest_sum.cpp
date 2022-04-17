#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> pair_gen(vector<int> &arr, int key, int limit){
        vector<vector<int>> out;
        for (int i : arr){
            if (limit == 0) break;
            out.push_back({key, i});
        }
        return out;
    }

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int a = *min_element(nums1.begin(), nums1.end());
        int b = *min_element(nums2.begin(), nums2.end());

        int key = min(a, b);
        if (key == a){
            return pair_gen(nums1, key, k);
        } else return pair_gen(nums2, key, k);

    }
};

int main(){
    
    return 0;
}