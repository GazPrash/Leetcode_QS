#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size()-1;
        int i = goal - 1;

        while (i != 0){
            if (nums[i] > 0){
                goal--;
                i--;
            }
            else return false;

        }

        return true; 
        
    }
};

int main(){
    cout<<stoi("06");
    return 0;
}