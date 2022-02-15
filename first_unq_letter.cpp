#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> charfq;

        for (char k : s){
            charfq[k]++;
        }

        int ind = 0;
        for (char c : s){
            if (charfq[c] == 1) return ind;
            ind++;
        }

        return -1;

    }
};

int main(){
    
    return 0;
}