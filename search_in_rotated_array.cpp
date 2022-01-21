#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size()-1;
    int mid;

    while (left < right){
        mid = (left+right)/2;
        if (nums[mid] > nums[right]) left += (mid+1);
        
    }


}

int main(){
    
    return 0;
}