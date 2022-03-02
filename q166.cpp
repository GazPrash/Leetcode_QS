#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        long double frac = float(numerator) / float(denominator);
        string frac_str = to_string(frac);
        int n = frac_str.length();

        string integral, fractional, possible_repeats;
        unordered_set<char> decimals;
        bool chec_deci = 0, rec_exists = 0;
        int dec_repeated = 0, j = n;
        
        while (frac_str[j-1] == '0'){
            frac_str[j-1] = '*';
            j--;
        }
        
        for (int i = 0; i < n; i++){
            char k = frac_str[i];
            if (k == '*') break;

            if (k == '.'){
                chec_deci = 1;
                continue;
            }
            else if (chec_deci){
                if (decimals.find(k) == decimals.end()){
                    fractional += k;
                    decimals.insert(k);
                }
                else{
                    dec_repeated++;
                    possible_repeats += k;
                    if (dec_repeated == decimals.size()){
                        rec_exists = 1;
                        break;
                    }
                }

            }
            
            else integral += k;

        }
        
        if (fractional == "") return integral;

        return rec_exists ? (integral + '.' + '(' + fractional + ')') : (integral + '.' + fractional + possible_repeats);

    }
};


// optimal
class Solution2 {
public:
    string fractionToDecimal(int numerator, int denominator) {
        unordered_set<int> rem_table;
        int rem = numerator;
        string integral, fractional;
        bool deci_vals = 0, rec_exist = 0;

        while (1){
            cout<<rem<<endl;
            if (rem == 0) break;
            if (numerator < denominator){
                if (integral == "") integral += '0';
                deci_vals = 1;
                numerator *= 10;
                continue;
            }
            rem = numerator%denominator;
            if (rem_table.find(rem) != rem_table.end()){
                fractional += to_string(numerator/denominator + 1);
                rec_exist = 1;
                break;
            } else rem_table.insert(rem);

            if (deci_vals){
                fractional += to_string(numerator/denominator);
            }
            else{
                integral += to_string(numerator/denominator);
            }
            
        }
        
        if (rec_exist){
            return (integral + '.' + '(' + fractional + ')');
        }
        return (integral + '.' + fractional);

    }
};
int main(){

    return 0;
}