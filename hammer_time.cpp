#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string to_bin(int val){
        string out;
        while (val > 0){
            if (val%2 == 0) out += '0';
            else out += '1';
            val /= 2;
        }
        reverse(out.begin(), out.end());
        return out; 
    }

    int hammingDistance(int x, int y) {
        int out = 0;

        string xx = to_bin(x);
        string yy = to_bin(y);

        if (xx.length() < yy.length()){
            int ct = 0;
            while (ct < (yy.length() - xx.length())){
                xx.insert(xx.begin(), '0');
            }
        }
        else if (xx.length() > yy.length()){
            int ct = 0;
            while (ct < (xx.length() - yy.length())){
                yy.insert(yy.begin(), '0');
            }
        }

        for (int i = 0; i < xx.length(); i++){
            if (xx[i] != yy[i]) out++;
        }

        return out;

    }
};

int main(){
    
    return 0;
}