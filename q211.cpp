#include<bits/stdc++.h>
using namespace std;

class WordDictionary {
public:
    vector<string> memory;
    void addWord(string word) {
        memory.push_back(word);
    }
    
    bool search(string word) {
        bool found = false;
        for (auto it : memory){
            int i = 0;
            if (word.length() != (it).size()) continue;
            
            for (char ch : word){
                if (ch == '.'){
                    if ((i) >= (it).size()){
                        found = false;
                        break;
                    }
                    i++;
                    found = true;
                    continue;
                }
                if (ch == (it)[i]) found = true;
                else {
                    found = false;
                    break;
                }
                i++;
            }
            if (found) return true;
        }

        return false;
        
    }
};



int main(){
    
    return 0;
}