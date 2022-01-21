#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> ctt;
    for (int i = 0; i < nums.size(); i++){
        if (ctt.count(nums[i]) == 0) ctt[nums[i]] = i;
        else if (abs(ctt[nums[i]] - i) <= k){
            return true;
        }
        else{
            ctt[nums[i]] = i;
        }
    }


    return false;


}

int main(){
    
    return 0;
}