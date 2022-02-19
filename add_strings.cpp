#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.length(), n2 = num2.length();
        if (num1.length() != num2.length()){
            if (n1 < n2){
                while (n1 != n2) num1.insert(num1.begin(), '0'), n1++;
            }
            else{
                while (n1 != n2) num2.insert(num2.begin(), '0'), n2++;
            }
        }
        string tsum;
        int csum = 0;
        int carry = 0, temp = 0;
        for (int i = num1.length()-1; i >= 0; i--){
            csum = ((num1[i]-'0') + (num2[i]-'0'));
            if(carry) csum += carry;
            if (csum > 9){
                temp = csum;
                while (temp > 10){
                    temp /= 10;
                }
                carry = temp;
            }
            else carry = 0; 
            
            tsum.insert(tsum.begin(), ((csum%10)+'0'));
        }
        
 
        if (carry >= 10) tsum.insert(tsum.begin(), ((carry/10)+'0'));
        else if (carry != 0) tsum.insert(tsum.begin(), (carry+'0'));

        return tsum;

    }
};
int main(){

    int b = 18/10;
    char a = b+ '0';
    cout<<a;


    
    return 0;
}