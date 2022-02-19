#include<bits/stdc++.h>
using namespace std;

// NOTE: Not the cleanest solution ever but its working, still not purely O(logn) though
//       have to fix that.... TODO (optz; else branch in mainloop)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> out(2, -1);
        if (nums.size() == 0) return out;
        if ((nums.size() == 1) && (nums[0] == target)){
            out[0] = 0;
            out[1] = 0;
            
            return out;

        }

        int l = 0, h = nums.size()-1, m;
        int start= -1, end = -1;

        while (l <= h){
            m = (h+l)/2;
            cout<<m;
            if (target < nums[m]) h = m-1;
            else if (target > nums[m]) l = m + 1;
            else{
                int j = m;
                while (nums[j] == target){
                    if (j == 0) {
                            j--; 
                            break;
                        }
                    j--;
                }
                start = j+1;
                j = m;
                while (nums[j] == target){
                    if (j == nums.size()-1) {
                            j++;
                            break;
                        }
                    j++;
                }
                end = j-1;
                break;
            }

        }

        out[0] = start;
        out[1] = end;
        return out;
        
    }
};
int main(){
    
    return 0;
}