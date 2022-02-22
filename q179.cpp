#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // this method is static to indicate that it is a class only func, and so that we can use 
    // it inside any other method of the class.
    static int comparator(int a, int b){
        string s1 = to_string(a);
        string s2 = to_string(b);

        if ((s1 + s2) > (s2 + s1)) return true;
        else return false;

    }
    string largestNumber(vector<int>& nums) {
        string out;
        
        unsigned long long j = 0;
        for (unsigned long long i : nums) j += i;
        if (j == 0) return "0";

        sort(nums.begin(), nums.end(), comparator);

        for (int k : nums){
            out += to_string(k);
        }
        
        return out;
    }
};


int main(){
    
    return 0;
}