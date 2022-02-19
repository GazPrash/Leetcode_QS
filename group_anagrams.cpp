#include<bits/stdc++.h>
using namespace std;

// Original Approach using ascii sums of strings (Not Accepted)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<int, vector<string>> rel;
        set<char> record;
        vector<vector<string>> out;

        int csum;
        vector<string> temp;
        for (const string k : strs){
            csum = 0;
            temp.clear();
            for (const char ch : k){
                csum += int(ch);
            }

            temp = rel[csum];
            temp.push_back(k);
            rel[csum] = temp;

        }

        for (auto it = rel.begin(); it != rel.end(); it++){
            out.push_back(it->second);
        }
        return out;
        
    }
};

// Alternative (& Better) approach by sorting chars of individual strings (Accepted)

class Solution2 {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        unordered_map<string, vector<string>> ord;
        string temp;
        vector<string> temp_vec;
        vector<vector<string>> out;

        for (int i = 0; i < strs.size(); i++){
            temp = strs[i];
            sort(temp.begin(), temp.end());
            temp_vec =  ord[temp];
            temp_vec.push_back(strs[i]);
            ord[temp] = temp_vec;
            temp_vec.clear();
        }

        for (auto it = ord.begin(); it != ord.end(); it++){
            out.push_back(it->second);
        }

        return out;

    }

};

int main(){

    string abc = "bca";
    sort(abc.begin(), abc.end());

    cout<<abc;
    
    return 0;
}