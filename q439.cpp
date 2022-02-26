#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        unordered_map<char, int> kp;

        for (auto ch : s) kp[ch]++;
        int track = -1;
        for (auto it = kp.begin(); it != kp.end(); it++){
            if (track >= 0){
                if (track != it->second) return false;
            }
            else track = it->second;

        }

        return true;
        
    }
};

int main(){
    
    return 0;
}