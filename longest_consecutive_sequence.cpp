#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> track;

        for (int k : nums){
            track[abs(k)]++;
        }

        // int left_consec = 0, right_consec = 0;
        // int mleft = 0, mright = 0;
        // for (int n : nums){
        //     if (track[n] >= 1){
        //         cout<<n<<"----"<<n+1<<endl;
        //         if (track[n+1] >= 1) right_consec++;
        //         else {
        //             mright = max(right_consec, mright);
        //             right_consec = 0;
        //         }
        //     }
            
        //     else if (track[-n] >= 1){
        //         cout<<-n<<" [---] "<<-n+1<<endl;
        //         if (track[-(n+1)] >= 1) left_consec++;
        //         else {
        //             mleft = max(left_consec, mleft);
        //             left_consec = 0;
        //         }
        //     }
        // }

        int consec, max_consec = 0;


        for (int n : nums){
            if (track[n] >= 1){
                if ((track[n+1] <= 0) || (track[-(n+1)] <= 0)){
                    max_consec = (consec, max_consec);
                    consec = 0;
                }

                if (track[n+1] >=1) consec++;
                if (track[-(n+1)] >= 1) consec++;
            }

        }


        return max_consec;

        
    }
};


int main(){
    
    return 0;
}