#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> alpha_count;
        for (char k : s) alpha_count[k]++;

        string out;
        for (auto pair  :alpha_count){
            int i = 0;
            if (pair.second >= 1){
                while (s[i] != pair.first){
                    if (alpha_count[s[i]] >= 1){
                        out += s[i];
                        alpha_count[s[i]] = 0;
                    }
                    i++;
                }
                out += pair.first;
            }
        }

        return out;
    }
};

int main(){
    
    return 0;
}