#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if ((digits[n-1]) < 9){
            digits[n-1]++;
            return digits;        }
        string num;
        unsigned long long incre_num;

        for (int i: digits){
            num += to_string(i);
        }
        incre_num = stol(num);
        
        std:: vector<int> newdig;
        for (char c: to_string(++incre_num)){
            newdig.push_back(int(c) -48);
        }

        return newdig;

    }
};


// alternate solution

class Solution2{
public:
    vector<int> plusOne(vector<int> & digits){
        int n = digits.size();
        if ((digits[n-1]) < 9){
            digits[n-1]++;
            return digits;  
        }

        bool notset = true;

        int k = n-1;
        while (notset){

            if (digits[k] == 9){
                digits[k] = 0;
                k--;
            }
            else{
                notset = false;
            }
        }

        return digits;
    }

};