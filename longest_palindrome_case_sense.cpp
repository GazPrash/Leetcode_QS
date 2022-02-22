#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> track;
        
        for (char k : s) track[k]++;
        bool odds = false;
        int len = 0;
        
        for (auto it = track.begin(); it != track.end(); it++){
            if (it->second%2 == 0) len+= (it->second);
            else{
                len += (it->second -1);
                odds = true;
            }

        }

        if (odds) return (len+1);
        return len;
    }
};

int main(){
    
    return 0;
    
}