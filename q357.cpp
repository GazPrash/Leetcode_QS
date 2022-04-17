#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rec_func(int k, int loops = 0){
        if (k == 0) return 1;
        else if (k >= 1 && k < 10){
            return k * rec_func(k-1, loops+1);
        } 
        else if (k >= 10 and loops < 10){
            return k * rec_func(k-1, loops+1);
        } 
        return 0;

    }

    int countNumbersWithUniqueDigits(int n) {
        return rec_func(10);        
    }

};

int main(){
    
    return 0;
}

// [11 22 33 * 10(1])
// 111 222 333 + [11 22 33 * (10) * 10]
// 1111 2222 3333 + 111 + 222 + 333 + [11 + 22 + 33 10 * 10 * 10]


//  _ _ _ _ let's say we have to select a number consisting of 4 unique digits
// total_ways = 10 * 9 * 8 * 7 ----> 
