#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        vector<int> vec;
        for (char k : secret) vec.push_back((k - '0'));

        for (int i = 0; i < secret.length(); i++){
            if (guess[i] == secret[i]) {
                secret[i] = 'X';
                bulls++;
            }
        }

        for (int j = 0; j < secret.length(); j++){
            auto findit = find(secret.begin(), secret.end(), guess[j]);
            if (findit != secret.end()){
                cows++;
                *findit = 'X';
            }
        }
        // ive been moving to the foog i had a long black night...
        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
};

int main(){
    char a = '1';
    cout<<a - '0';
    
    return 0;
}