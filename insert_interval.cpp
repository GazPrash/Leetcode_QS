#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int start = newInterval[0], stop = newInterval[1];

        for (int i = 0; i < intervals.size(); i++){
            if (start <= intervals[i][0]){
                if (stop <= intervals[i][1]){
                    return intervals;
                } else {
                    intervals[i][1] = stop;
                    return intervals;
                }
            } else if (start <= intervals[i][1]) {
                int iter = i;
                while (iter < intervals.size()){
                    if (stop <= intervals[iter][0]){
                        auto back_it = intervals.begin()+(iter-1);
                        int store_start = (*back_it)[0];
                        intervals.erase(back_it);
                        intervals[iter][0] = store_start;
                        return intervals;
                    }
                }
                intervals[iter][1] = stop;
                return intervals;

            }

        }
        // iske baad nahi awve che

        
    }
};

int main(){
    vector<int> a = {1, 2, 3, 4, 5, 2, 11, 1121, 22, 111};
    auto it = a.begin() + (5-1); 
    cout<<*it;

    return 0;
}