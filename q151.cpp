#include<bits/stdc++.h>
using namespace std;


// ACCEPTED | 0 ms | Beats 100%

class Solution {
public:
    string reverseWords(string s) {
        bool word_start = 0;
        vector<string> word_list;
        string temp;
        for (int i = 0; i < s.size(); i++){
            if ((i == s.size() - 1)){
                if (s[i] != ' '){
                    temp += s[i];
                    word_list.push_back(temp);
                }
                break;
            }
            if (!word_start && (s[i] == ' ')) continue;
            else if (word_start && (s[i] == ' ')){
                word_list.push_back(temp);
                temp = "";
                word_start = 0;
            }
            else {
                word_start = 1;
                temp += s[i];
            }

        }
        temp = "";
        for (int i = word_list.size() -1; i >= 0; i--){
            temp += word_list[i];
            if (i != 0) temp += ' ';
        }

        return temp;
        
    }
};

int main(){
    
    return 0;
}

// TEST INPUT : 

// "the sky is blue"
// "  hello world  "
// "       a good   example sdbhjasb          asbdi            aus ui saig  g  uasig  ga  g g  g  asg iugigag      "
// "a               aa a good dasyugdaysg iaisi  ghgsaiudhuisgdaiuga  sgagi qrd   g g g g g   g   g  g g assgyui gasuiduaisdg  sag auigasuigduisagdui g uias suia   ausi iusa gasauisgdui gqiug dsuidoah so ig  ga  g g  g  asg iugigag      "
// " asdasd df f"