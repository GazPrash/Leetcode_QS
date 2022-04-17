#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        int mx, sec_mx;

        while (pq.size() > 1){
            mx = pq.top();
            pq.pop();
            sec_mx = pq.top();

            if (mx != sec_mx){
                pq.push(mx-sec_mx);
            } else pq.pop();
        }

        return pq.empty() ? 0 : pq.top();

    }
};

int main(){
    
    return 0;
}

// pwkeknw
// ^