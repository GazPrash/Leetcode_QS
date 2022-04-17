#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;
        int lo = 0, hi = 0, temp = -1, maxfq = -1, strlen = 0, max_strlen = 0;
        bool dont_add = false;
        while (hi < s.length()){
            if (!dont_add){
                m[s[hi]]++;
                strlen++;
            }
            dont_add = false;
            for (auto iter:m){
                maxfq = max(maxfq, iter.second);
            }
            temp = (strlen - maxfq);

            if (temp <= k){
                hi++;
            } else {
                m[s[lo]]--;
                strlen--;
                lo++;
                dont_add = true;
            }

            max_strlen = max(strlen, max_strlen);
        }

        return max_strlen;
    }
};

int main(){
    
    return 0;
}