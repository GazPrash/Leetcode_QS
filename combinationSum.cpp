#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void rec_func(vector<int> &candidates, 
                    vector<int> curr, 
                    int ind_on, 
                    int csum, 
                    int target,
                    vector<vector<int>> &out)
                {
        int num_on = candidates[ind_on];

        if ((csum + num_on) > target)
        {
            rec_func(candidates, curr, ind_on, csum, target, out);
        }
        else if ((csum + num_on) < target)
            {
                int iter = ind_on;
                while (iter < candidates.size())
                {
                    rec_func(candidates, curr, iter + 1, csum, target, out);
                }
            }
        else if ((csum+ num_on) == target){
            curr.push_back(num_on);
            out.push_back(curr);
            curr.clear();
            csum = 0;
            rec_func(candidates, curr, ind_on + 1, csum, target, out);

        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> out;
        vector<int> inner;

        rec_func(candidates, inner, 0, 0, target, out);

        return out;
    }
};

int main()
{
    return 0;
}