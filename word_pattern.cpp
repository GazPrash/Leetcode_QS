#include<bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s) {
    map<char, int> let;
    map<string, int> word;

    vector<string> sword;
    string temp;
    for (char c: s){
        if (c != ' ') temp += c;
        else sword.push_back(temp), temp = "";
    }
    sword.push_back(temp);
    
    if (pattern.size() != sword.size()) return false;
    
    for (int i = 0; i < sword.size(); i++){
        if (word[sword[i]] != let[pattern[i]]) return false;
        word[sword[i]] = let[pattern[i]] = i+1;
    }
    
    return true;




}

int main(){
    
    return 0;
}