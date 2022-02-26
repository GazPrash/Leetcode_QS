#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int loop_iters = 0;
    bool lap(vector<int> & gas, vector<int> & cost, int i, int gas_left){
        if (loop_iters == gas.size()){
            loop_iters = 0;
            return true;
        }

        loop_iters++;
        if ((gas[i] + gas_left) < cost[i]) return false;
        gas_left = (gas_left + gas[i] - cost[i]);
        return lap(gas, cost, (i+1)%gas.size(), gas_left);
    }

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i = 0;
        while (i < gas.size()){
            if (lap(gas, cost, i, 0)) return i;
            i++;
        }

        return -1;
    }
};


// Alternate working soln : 

// int i = 0;
// int gas_left = 0;
// int loop_iters = 0;
// int station = 0;

// while (i < gas.size()){
//     if (loop_iters == gas.size()) return station;
//     gas_left = (gas_left + gas[i] - cost[i]);
//     if (gas_left <= 0){
//         gas_left = 0;
//         station++;
//         i = station;
//     }
//     else{
//         i = (i+1)%gas.size();
//         loop_iters += 1;
//     }

//     i++;
// }

// return -1;

int main(){
    
    return 0;
}