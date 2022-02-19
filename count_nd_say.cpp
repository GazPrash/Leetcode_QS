#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rec_func(string base, int limit){
        string new_base;
        unordered_map<char, int> fq;
        for (char ch : base){
            fq[ch]++;
        }
        for (auto it = fq.begin(); it != fq.end(); it++){
            new_base += ((to_string(it->second)) + it->first);
        }
        fq.clear();
        if (limit == 0) return new_base;
        return rec_func(base, limit-1);

    }

    string countAndSay(int n) {
        string out = "";
        return rec_func("1", n);
    }
};

int main(){
    
    return 0;
}