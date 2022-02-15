#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> fq1;
        map<char, int> fq2;

        for (char ch : magazine){
            fq1[ch]++;
        }
        for (char ah : ransomNote){
            fq2[ah]++;
        }

        for (char k : ransomNote){
            if (fq2[k] > fq1[k]) return false;
        }

        return true;

    }
};

int main(){


}