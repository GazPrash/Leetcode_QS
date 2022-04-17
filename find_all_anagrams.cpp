#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> pmap;
        int lo = 0, hi = 0, totalfq = 0;
        vector<int> out;
        for (char ch : p){
            pmap[ch]++;
            totalfq += pmap[ch];
        }

        while (hi < s.length()){
            if (pmap[s[hi]] >= 1){
                pmap[s[hi]]--;
                totalfq--;
            }
            if (totalfq == 0){
                out.push_back(lo);
                lo++;
                continue;
            }

            if (pmap[s[hi]] <= 0){
                hi++;
                lo = hi;
                continue;
            }

            hi++;
        }
    }
};

int main(){
    
    return 0;
}