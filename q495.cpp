#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (duration == 0 || timeSeries.size() == 0) return 0;
        int total = 0;
        for (int i = 0; i < timeSeries.size(); i++){
            if (timeSeries[i] - timeSeries[i-1] < duration){
                total += timeSeries[i+1] - timeSeries[i];
            } else {
                total += duration;
            }
        }

        return total;
    }
};

// [1,2, 3, 17, 14, 15]
//  8
// 7 - 2 == 6
// 9 - 7 == 2

int main(){
    
    return 0;
}