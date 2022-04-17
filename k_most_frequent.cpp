#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() == 1) return nums;

        vector<int> out, freq_table;
        unordered_map<int, int> m;

        for (int k : nums) m[k]++;

        int cfreq = -1;
        for (auto it = m.begin(); it != m.end(); it++){
            if (cfreq < it->second){
                out.insert(out.begin(), it->first);
                cfreq = it->second;
            } else {
                if (it->second < m[out[out.size()-1]]){
                    out.push_back(it->first);
                    continue;
                }
                    
                auto tempit = out.begin();
                for (int t : out){
                    int tempFreq = m[t];
                    if (tempFreq <= it->second){
                        out.insert(tempit, it->first);
                        break;
                    }
                    tempit++;
                }
            }

        }

        return vector<int>(out.begin(), out.begin()+k);

    }
};
int main(){
    
    return 0;
}