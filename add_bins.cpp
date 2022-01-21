#include<bits/stdc++.h>
using namespace std;

// un-finished

string addBinary(string a, string b) {
    int i, j, k;

    i = a.length();
    j = b.length();

    string ans;
    bool carry = false;
    while (i >=0 && j >=0){
        if (a[i] == '0' || b[j] == '0'){
            int csum = (int(a[i]) + int(a[j]) -96);
            ans += to_string(csum);
            if (carry){
                if ((csum) == 1){

                }
            }
        }
        else if (a[i] == '1' && b[j] == '1'){
            ans += '0';
            carry = true;
        }
    }


}

int main(){
    
    return 0;
}