#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ind = 0;
        for (char k : t){
            if (k == s[ind]) ind++;
        }

        if (ind == s.length()) return true;
        else return false;
        
    }
};


int main(){
    
    return 0;
}