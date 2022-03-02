#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.length() < 10) return {};
        string work;
        
        unordered_set<string> table;
        unordered_set<string> repeated;
        
        vector<string> out;
        int j = 10;
        
        for (int i = 0; i < s.length()-9; i++){
            work = s.substr(i, j);
            if ((table.find(work) != table.end()) && (repeated.find(work) == repeated.end())){
                out.push_back(work);
                repeated.insert(work);
            } else table.insert(work);
            work = "";
        }

        return out;
        
    }
};


int main(){
    
    return 0;
}