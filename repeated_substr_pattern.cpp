#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp = s.substr(1, s.length()) + s.substr(0, s.length()-1);
        int j = 0;
        for (auto ch : temp){
            if (s[j] == ch) j++;
        }

        return (j == s.length());
    }

};


int main(){
    
    return 0;
}