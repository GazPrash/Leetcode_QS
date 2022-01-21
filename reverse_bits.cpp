#include<bits/stdc++.h>
using namespace std;


uint32_t reverseBits(uint32_t n) {
    uint32_t out;
    string bin;
    int i=0;

    while (n > 0){
        bin[i] = '0' + (n%2);
        n /= 2;
        i++;
    }

    std::reverse(bin.begin(), bin.end());
    out = stoi(bin, 0, 2);
    
    return out;

}

int main(){
    
    return 0;
}