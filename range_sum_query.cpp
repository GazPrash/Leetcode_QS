#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> numarr;
    NumArray(vector<int>& nums) {
        numarr = nums;
    }
    
    void update(int index, int val) {
        numarr[index] = val;
    }
    
    int sumRange(int left, int right) {
        int out = 0;
        for (int i = left; i <= right; i++) out += numarr[i];
        return out;
    }
};

int main(){
    
    return 0;
}