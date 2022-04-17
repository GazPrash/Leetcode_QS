#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool _comp(vector<int> first, vector<int> sec){
        if (first[1] < sec[1] || (first[1] == sec[1] && first[2] < sec[2])) return true;
        else return false;
    }

    bool carPooling(vector<vector<int>>& trips, int capacity) {

        sort(trips.begin(), trips.end(), _comp);
        int noPassgrs = 0, nextStop = -1;
        for (auto vec : trips){

            if (nextStop != -1){
                if (nextStop > vec[1]){
                    noPassgrs += vec[0];
                    if (noPassgrs > capacity) return false;
                    continue;
                } else {
                    noPassgrs = 0;
                }
            }

            noPassgrs += vec[0];
            if (noPassgrs > capacity) return false;
            nextStop = vec[2];
        } 

        return true;
        
    }
};

int main(){
    return 0;
}