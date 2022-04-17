#include<bits/stdc++.h>
using namespace std;

bool isMatching(string s, string p){
    for (int i = 0; i < s.length(); i++){
        if (s[i] == p[i]) continue;
        else {
            if (p[i] == '.') continue;
            else if (p[i] == '*'){
                char temp = s[i];
                while (s[i] != temp && i < s.length()){
                    i++;
                }
            } else return false;

        }
    }
    return true;

}

int main(){
    auto s1 = "mississipi";
    auto s2 = "mis*is*ipi";

    cout<<isMatching(s1, s2);
    
    return 0;
}