#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool capped = false, repeated_cap = false, small = false;
        for (char k : word){
            if (toupper(k) == k){
                if (capped){
                    if (!small) repeated_cap = true;
                    else return false;
                } else {
                    capped = true;
                }
            } else if (tolower(k) == k) {
                if (repeated_cap) return false;
                small = true;
            }
        }
        return true;
    }
};


int main(){
    
    return 0;
}