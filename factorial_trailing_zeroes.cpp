#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ct = 0;
    long long factorial(int k){
        if ((k == 1) || (k == 0)) return 1;

        long long k_dash = factorial(k-1);
        long long out = (k * k_dash);
        while (out%10 == 0){
            out /= 10;
            ct++;
        }

        return out;

    }

    int trailingZeroes(int n) {
        if ((n == 0) || (n ==1)){
            return n == 0 ? 1 : 0;
        }

        return ct;

        
    }
};

int main(){
    Solution s1;
    cout<<s1.factorial(44);
    
    return 0;
}