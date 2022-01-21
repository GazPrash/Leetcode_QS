#include<bits/stdc++.h>
#include<cwctype>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string s) {
            vector<char> accstr;
            for (char x : s){
                if (iswalnum(x)) accstr.push_back(tolower(x));
            }
            if (accstr.empty()){
                return true;
            }
            
            int n = accstr.size();
            for (int i = 0, j = n-1; i <= j; i++, j--){
                if (accstr[i] != accstr[j]){
                    return false;
                }
            }        

            return true;
        }
};