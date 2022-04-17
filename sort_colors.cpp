#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> ballFreq;
        for (int k : nums) ballFreq[k]++;
        int index = 0;
        for (int i =0; i <= 2; i++){
            while (ballFreq[i] > 0){
                nums[index] = i;
                index++;
                ballFreq[i]--;
                continue;
            }
            i++;
        }
    }
};

// 012210  ---> 0, 0, 
// ^

int main(){
    
    return 0;
}