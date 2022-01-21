#include<iostream>
#include<vector>

using namespace std;

vector<int> removeDuplicates(vector<int>& nums) {
    int n= nums.size();
    int last = NULL;
    vector<int>::iterator iter = nums.begin();
    for (int i = 0; i < n; i++){
        iter++;
        cout<<"\->"<<nums[i];
        if (!last){
            last = nums[i];
        }
        if (last == nums[i]){
            nums.erase(iter);
        }
        if (last != nums[i]){
            last = nums[i];
        }

    }
    return nums;
}

int main(){
    return 0;
}