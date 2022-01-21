#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> ledg;
    int ns = nums.size();

    for (int k: nums){
        ledg[k]++;
    }

    for (auto iter = ledg.begin(); iter != ledg.end(); iter++){
        if ((iter->second) > ns/2) return iter->first;
    }

}

int main(){
    
    return 0;
}