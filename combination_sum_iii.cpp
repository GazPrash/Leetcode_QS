#include<bits/stdc++.h>
using namespace std;

// Hash-Set method | No DP Maintained | Accepted (24 ms)
class Solution {
public:
    vector<vector<int>> out;
    set<vector<int>> s;
    void rec_func(int csum, vector<int> curr_vec, int k, int n, int curr, int use){
        if ((curr > 9) || (csum == n)){
            if (curr_vec.size() == k){
                if (csum == n){
                    auto it = s.find(curr_vec);
                    if (it == s.end()){
                        s.insert(curr_vec);
                        out.push_back(curr_vec);
                        return;
                    }
                }
            }
            return;
        }
        if (use){
            csum += curr;
            curr_vec.push_back(curr);
            rec_func(csum, curr_vec, k, n, curr+1, 0);
            rec_func(csum, curr_vec, k, n, curr+1, 1);
        } else {
            rec_func(csum, curr_vec, k, n, curr+1, 0);
            rec_func(csum, curr_vec, k, n, curr+1, 1);
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        rec_func(0, curr, k, n, 1, 0);
        rec_func(0, curr, k, n, 1, 1);

        return out;

    }
};


// DP Method | Not Accepted | Work needed

class Solution {
public:
    vector<vector<int>> out;
    bool rec_func(int csum, vector<int> curr_vec, int k, int n, int curr, int use, vector<vector<int>> &dp){
        if ((curr > 9) || (csum == n)){
            if (curr_vec.size() == k){
                if (csum == n){
                    out.push_back(curr_vec);
                    return true;
                }
            }
            return false;
        }
        if (use){
            if (dp[0][curr-1]){
                return true;
            }
            else{
                csum += curr;
                curr_vec.push_back(curr);
                dp[0][curr-1] = (rec_func(csum, curr_vec, k, n, curr+1, 0, dp)
                || rec_func(csum, curr_vec, k, n, curr+1, 1, dp));

                return dp[0][curr-1];
            }

        } else {
            if (dp[1][curr-1]){
                return true;
            }
            else{
                dp[1][curr-1] = (rec_func(csum, curr_vec, k, n, curr+1, 0, dp) ||
                rec_func(csum, curr_vec, k, n, curr+1, 1, dp));

                return dp[1][curr-1];
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        vector<vector<int>> dp(9, vector<int> (2, -1));

        rec_func(0, curr, k, n, 1, 0, dp);
        rec_func(0, curr, k, n, 1, 1, dp);

        return out;

    }
};



int main(){
    
    return 0;
}