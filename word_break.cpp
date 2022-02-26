#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, int> rec;

        for (auto str: wordDict){
            rec[str] = 1;
        }
        string word;
        int countt = 0, i = 0, j = 0;
        while (i < s.length()-1){
            while (j < s.length()){
                word = s.substr(i, j);
                cout<<word<<endl;

                if (rec[word] == 1){
                    countt += word.length();
                    word = "";
                    if (countt == s.length()) return true;
                    // cout<<i<<"---"<<j<<endl;
                    i = j+1;
                    j++;
                }

                j++;

            }
            i++;
        }

        return false;
    }
};

int main(){
    
    return 0;
}