#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        unordered_map<int, vector<int>> ivals;
        vector<vector<int>> out;
        vector<int> temp;
        int start = 0, end = 0;
        for (int i = 0; i < intervals.size(); i++){
            start = intervals[i][0];
            end = intervals[i][1];

            if (end >= intervals[i+1][0]){
                end = intervals[i+1][1];
            }

            temp = ivals[start];
            temp[0] = start;
            temp[1] = end;
            ivals[start] = temp;
            temp.clear();
        }
        for (auto it = ivals.begin(); it != ivals.end(); it++){
            out.push_back(it->second);
        }    

        return out;
    }
};

int main(){
    
    return 0;
}