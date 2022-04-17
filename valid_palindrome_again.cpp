#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int lo = 0, hi = s.length()-1;
        int lim = 0;

        while (lo++ <= hi--){
            if (s[lo] != s[hi]){
                lim++;
            }


        }

    }

};

int main(){
    string s = "pwkedekw";
    cout<<s.substr(1, s.length()-1);

    
    return 0;
}

// pwekewd