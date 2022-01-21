#include<vector>
#include<map>
#include<set>
#include<iostream>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int summ;
    if (n ==1){
        return nums[0];
    }

    int csum = 0;

    for (int k : nums){
        if (csum < 0){
            csum = 0;
        }

        else{
            csum += n;
        }

    }

    return csum;

}

int main(){
    
    return 0;
}