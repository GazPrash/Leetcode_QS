#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
        unordered_map<char, int> freq;
        int maxlen = 0, temp = 0;
        bool char_changed = false;
        char lastchar;
        int i = 0;
        for (char ch : s){
            freq[ch]++;
            if (i == 0){
                lastchar = ch;
                temp++;
                continue;
            }
            if (lastchar != ch){
                if (freq[ch] < k){
                    maxlen = max(maxlen, temp);
                    temp = 0;
                    freq.clear();
                }
            }
            lastchar = ch;
            temp++;
        }
        return maxlen;
    }
};

int main(){
    
    return 0;
}