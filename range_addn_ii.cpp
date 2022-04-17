#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int x = m, y = n;
        for (auto vec : ops){
            x = min(x, vec[0]);
            y = min(y, vec[1]);
        }
        return x * y;
    }
};

int main(){
    
    return 0;
}