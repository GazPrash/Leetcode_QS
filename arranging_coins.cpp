#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {

        int i = 0, ct = 0;
        while (1){
            if (ct == n) return i;
            if (ct > n) return i-1;
            i++;
            ct += i;

        }
     
    }
};

int main(){
    
    return 0;
}