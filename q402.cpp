#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string temp;
        vector<string> v;
        int t;
        for (int i = s.size()-1; i >= 0; i--){
            t = int(s[i]);
            if (i == 0){
                v.push_back(temp);
                break;
            }
            if (temp.length() == k){
                v.push_back(temp);
                temp = "";
            }
            if (t >= 65 && t <= 122){

                if (t >= 97){
                    temp += toupper(s[i]);
                    continue;
                }
                temp += s[i];
            }
        }
        temp = "";
        for (int j = v.size()-1; j >=0; j--){
            if (j == 0){
                temp += v[j];
                break;
            }
            temp += (v[j] + '-');
        }

        return temp;
        
    }
};

int main(){
    cout<<toupper('a');
    
    return 0;
}