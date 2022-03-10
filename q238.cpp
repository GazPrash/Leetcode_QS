#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr1(n, 0);
        vector<int> arr2(n, 0);

        for (int i = 0; i < n; i++){
            if (i == 0){ 
                arr1[i] = nums[i];
                continue;
            }
            arr1[i] = nums[i] * arr1[i-1];
        }
        for (int j = n-1 ; j >= 0; j--){
            if (j == n-1){
                arr2[j] = nums[j];
                continue;
            }
            arr2[j] = arr2[j+1] * nums[j];
        }

        vector<int> out;
        int temp;
        for (int k = 0; k < n; k++){
            if ((k == 0) || (k == n-1)){
                if (k == 0){
                    temp = 0 + arr2[k+1];
                } else {
                    temp = arr1[k-1] + 0;
                }

                out.push_back(temp);
                continue;
            }

            temp = arr1[k-1] * arr2[k+1];
            out.push_back(temp);
            temp = 0;
        }

        return out;
        
    }
};

int main(){
    
    return 0;
}