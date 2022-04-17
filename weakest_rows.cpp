#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comparator(pair<int, int> p, pair<int, int> q){
        if (p.second == q.second){
            if (p.first < q.first) return true;
            return false;
        }
        return (p.second < q.second ? true : false);

    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> sumArray;
        int csum = 0, ind = 0;
        vector<int> out;

        for (auto vec : mat){
            for (int k : vec){
                csum += k;
            }
            sumArray.push_back({ind, csum});
            csum = 0;
            ind++;
        }
        sort(sumArray.begin(), sumArray.end(), comparator);
        for (auto pairr : sumArray){
            if (k == 0) break;
            out.push_back(pairr.first);
            k--;
        }

        return out;
    }
};


int main(){
    
    return 0;
}