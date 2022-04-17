#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool detectCapitalUse(string word) {
        bool capped = false, repeated_cap = false, repeated_small= false, small = false;
        for (char k : word){
            if (toupper(k) == k){
                if (capped){
                    if (!small) repeated_cap = true;
                    else return false;
                } else {
                    capped = true;
                }
            } else if (tolower(k) == k){
                if (small){
                    if (!capped) repeated_small = true;
                }
                if (repeated_cap) return false;
                small = true;
            }
        }
        return true;
    }
};


int main(){
    
    return 0;
}





        // bool goldRemoved = 0, silRemoved = 0, brzRemoved = 0;
        // for (int j : score){
        //     if (ct == 1 && (pq.top() == j)) { 
        //         out.push_back("Gold Medal");
        //         pq.pop(), ct++;
        //         goldRemoved = true;
        //         continue;
        //     }
        //     else if (ct == 2 && (pq.top() == j) && (goldRemoved)){
        //         out.push_back("Silver Medal");
        //         pq.pop();
        //         silRemoved = true, ct++;
        //         continue;
        //     }
        //     else if (ct == 3 && (pq.top() == j) && (goldRemoved && silRemoved)){
        //         out.push_back("Bronze Medal");

        //     }
        // }