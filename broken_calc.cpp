#include<bits/stdc++.h>
using namespace std;

// Daily LeetCode Challenge
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int turns = 0;
        if (target <= startValue) return startValue-target;
        while (target > startValue){
            if (target%2 == 0){
                target /= 2;
            } else {
                target++;
            }
            turns++;
        }
        return turns + (startValue - target);
    }
};

int main(){
    
    return 0;
}