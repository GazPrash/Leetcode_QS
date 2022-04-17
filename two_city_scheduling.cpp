#include<bits/stdc++.h>
using namespace std;


// Not Accepted 
class Solution {
public:
    void check_array_bounds(vector<int> &lesser_vec, vector<int> &greater_vec, int &total_cost, int temp){
        auto it1 = lower_bound(lesser_vec.begin(), lesser_vec.end(), temp);
        if (it1 != lesser_vec.end()){
            int k = *it1;
            greater_vec.push_back(k);
            total_cost += (k - temp);
            *it1 = temp;
        } else {
            greater_vec.push_back(temp);
        }
    }

    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> a;
        vector<int> b;
        int limit = costs.size()/2, total_cost = 0;

        for (auto vec : costs){
            int temp1 = vec[0], temp2 = vec[1];
            if (temp1 < temp2){
                if (a.size() >= limit){
                    check_array_bounds(a, b, total_cost, temp1);
                }
                else {
                    a.push_back(temp1);
                    total_cost += temp1;
                }
            } else {
                if (b.size() >= limit){
                    check_array_bounds(b, a, total_cost, temp2);
                } else {
                    b.push_back(temp2);
                    total_cost += temp2;
                }

            }
        }
        return total_cost;

    }
};


// Alternate Soln
class Solution{
public:
    static bool sort_comp(vector<int> a, vector<int> b){
        return ((a[0]-a[1]) <= (b[0] - b[1]));
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int limit = costs.size()/2, total_costs = 0;
        sort(costs.begin(), costs.end(), sort_comp);
        for (int i = 0; i < costs.size();i++){
            if (i < limit){
                total_costs += costs[i][0];
            } else total_costs += costs[i][1];
        }

        return total_costs;
    }
};

int main(){
    vector<int> a = {10, 30};
    cout<<*lower_bound(a.begin(), a.end(), 20);
    // OUTPUTS : 30
    return 0;
}