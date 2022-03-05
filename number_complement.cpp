#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string to_bin_and_back(int k){
        string out;
        while (k > 0){
            out += (k%2 == 0 ? '1' : '0');
            k /= 2;
        }
        reverse(out.begin(), out.end());
        return out;
    }

    int findComplement(int num) {
        return stoul(to_bin_and_back(num), nullptr, 2);
    }
};

int main(){

    return 0;
}