#include<iostream>
using std::string;

class Solution {
public:
    int countSegments(string s) {
        if (s == "") return 0;
        int ct = 0;
        bool char_on = 0, last_space = 1, last_was_char = 0;
        for (auto ch : s){
            if (ch == ' '){
                if (!last_space){
                    ct++;
                    last_space = 1;
                    last_was_char = 0;
                } 
            }
            else{
                last_was_char = 1;
                last_space = 0;
            }
        }
        if (!last_was_char){
            ct--;
        }
        return ct+1;
        
    }
};