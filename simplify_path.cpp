#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<char> stk;
        string highest_lvl;

        for (char c : path){
            if ((c == '/') || (c == '.') || (c == '..')) continue;
            else highest_lvl += c;
        }

        if (highest_lvl == "") highest_lvl = "/";

        for (char k : path){
            if (k == '/'){
                if (stk[stk.size() -1] == '/')
                    continue;
                else stk.push_back(k);
            }

            else if ((k == '..')){
            }
        }
    }
};

int main(){
    
    return 0;
}