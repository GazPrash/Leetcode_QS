#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> track;

        for (char ch : s){
            track[ch]++;
        }

        for (char ch2 : t){
            track[ch2]++;
        }

        for (auto it = track.begin(); it != track.end(); it++){
            if (it->second%2 == 1){
                return it->first;
            }
        }

        return '0';
        
    }
};


int main(){
    
    return 0;
}