#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {

        vector<int> dp(s.length()+1, 0);
        dp[1] = s[0] == '0' ? 0 : 1;         

        for (int i = 0; i < s.length()-2; i++){
            int fdig = stoul(s.substr(0, i+1));
            int sdig = stoul(s.substr(0, i+2));

        }
     
        return 4;
    }
};

int main(){
    
    return 0;
}