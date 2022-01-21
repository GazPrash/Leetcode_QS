#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    std:: vector<char> charmyass;
    bool wordstart = false;
    string word;

    for (int i = s.length(); i >=0 ; i--){
        charmyass.push_back(s[i]);
    }

    for (char k: charmyass){
        if (k != ' '){
            wordstart = true;
            word += k;
        }

        else if (k == ' ' && wordstart){
            return word.length();
        }
    }


}

int main(){
    
    return 0;
}