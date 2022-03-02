#include<bits/stdc++.h>
using namespace std;


// Hash Table / Set Solution --- 98% Space Efficiency

class Trie {
public:
    unordered_set<string> hash_set;
    Trie() {
        
    }
    
    void insert(string word) {
        hash_set.insert(word);
    }
    
    bool search(string word) {
        for (auto it = hash_set.begin(); it != hash_set.end(); it++){
            if ((*it) == word) return true;
        }
        return false;

    }
    
    bool startsWith(string prefix) {
        if (prefix == "") return false;
        int n = prefix.length();

        for (auto it = hash_set.begin(); it != hash_set.end(); it++){
            string shorten = (*it).substr(0, n);
            if (shorten == prefix) return true;
        }
        return false;

    }
};

// Dynamic array / Vector Solution. Slow and Takes a lot of space.

class TrieVec {
public:
    vector<string> memory;
    void insert(string word) {
        memory.push_back(word);
    }
    
    bool search(string word) {
        for (auto w : memory){
            if (word == w) return true;
        }
        return false;

    }
    
    bool startsWith(string prefix) {
        if (prefix == "") return false;
        int n = prefix.length();

        for (auto w : memory){
            if (prefix == w.substr(0, n)) return true;
        }
        return false;

    }
};


int main(){
    
    return 0;
}