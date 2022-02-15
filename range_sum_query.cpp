#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> arr;

    NumArray(vector<int>& nums) {
        arr = nums;
    }
    int sumRange(int left, int right) {
        int summ = 0;
        for (int i = left; i <=right; i++){
            summ += arr[i];
        }
        
        return summ;
    }
};

int main(){
    
    return 0;
}