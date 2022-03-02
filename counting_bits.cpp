#include<bits/stdc++.h>
using namespace std;
    
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> out(n+1, 0);

        for (int i = 1; i <= n; i++){
            out[i] = out[i/2] + out[i%2];
        }
        return out;
        
    }
};

int main(){
    
    return 0;
}