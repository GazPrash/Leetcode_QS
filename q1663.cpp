#include<bits/stdc++.h>
using namespace std;


// Daily LeetCode Challenge
class Solution {
public:
    string getSmallestString(int n, int k) {
        string temp;
        int b = n;
        while (b){
            temp += 'a';
            b--;
        }
        k -= n;
        int a = n-1;
        while (k){
            if (k < 26){
                temp[a] = 'a' + k;
                break;
            }

            temp[a] = 'a' + 25;
            k -= 25;
            a--;
        }
        
        return temp;
    }
};

int main(){
    
    return 0;
}