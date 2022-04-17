#include<bits/stdc++.h>
using namespace std;

// Using the sliding window technique

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> track;
        int lo = 0, hi = lo+1, out = -1, temp = 1;
        track.insert(s[lo]);
        while (hi < s.length()) {
            if (track.find(s[hi]) == track.end()){
                hi++, temp++;
            } else {
                lo++;
                track.clear();
                out = max(out, temp);
                temp--;
            }
        }
        return out;
    }
};

int main(){
    
    return 0;
}