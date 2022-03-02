#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        string v1, v2;
        bool num_start = 1;
        int n1 = version1.length(), n2 = version2.length();

        vector<int> dig(max(n1, n2), 0);
        int jiter = 0;
        int k1 = 0;
        
        for (auto c1 : version1){
            if (k1 == (n1-1)){
                v1 += c1;
                dig[jiter] = stoul(v1);
                break;
            }

            if (c1 == '.'){
                num_start = 1;
                if (v1 == "") v1 = "0"; 
                dig[jiter] = (stoul(v1));
                v1 = "";
                jiter++;
                k1++;
                continue;
            }

            if (num_start && c1 == '0'){
                k1++;
                continue;
            }
            else{
                num_start = 0;
                v1+=c1;
            }
            
            k1++;
            
        }
        num_start = 1;
        int cdig = 0, iter = 0;
        char temp;
        int u = 0;
        
        while (u < dig.size()){
            temp = version2[iter];

            if (iter == (n2-1)){
                v2 += temp;
                if (v2 == "") v2 = '0';
                cdig = stoul(v2);
                if (cdig > dig[u]) return -1;
                else if (cdig < dig[u]) return 1;
                else {
                    u++;
                    while (u < dig.size()){
                        if (dig[u] > 0) return 1;
                        u++;
                    }
                    return 0;
                }
            }

            if (temp == '.'){
                num_start = 1;
                if (v2 == "") v2 = '0';
                cdig = stoul(v2);
                if (cdig > dig[u]) return -1;
                else if (cdig < dig[u]) return 1;
                v2 = "";
                iter++;
                u++;
                continue;
            }

            if (num_start && temp == '0'){
                iter++;
                continue;
            }
            else{
                num_start = 0;
                v2 += temp;
            }
            iter++;

        }

        return 0;

    }
};


int main(){
    
    return 0;
}