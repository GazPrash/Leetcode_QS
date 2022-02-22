#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string bln = "balloon";
        unordered_map<char, int> keep;

        for (char ch : text){
            keep[ch]++;
        }
        int out = INT_MAX;
        for (char kh : bln){
            if ((kh == 'l') || (kh == 'o'))
                out = min(keep[kh]/2, out);
            out = min(keep[kh], out);
        }
        
        return out;
    }
};


int main(){
    
    return 0;
}

// i love this groovebox material theme damnn...