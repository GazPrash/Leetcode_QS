#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        if (n == 1 || n == 2) return 1;
        if (n == 3) return 3;
        if (n == 4) return 4;
        if (n == 5) return 6;

        return 3 * integerBreak(n-3);
    }
};

int main(){
    
    return 0;
}