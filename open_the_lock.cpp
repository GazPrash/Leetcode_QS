#include<bits/stdc++.h>
using namespace std;
    
bool move_forw(string base, vector<string>& deadends, int ind, int diff){
    base[ind] = ((int(base[ind]-'0') + diff)%10) + '0';
    for (string s : deadends){
        if (s == base) return false;
    }
    return true;
}

int openLock(vector<string>& deadends, string target) {
    string base = "0000";

}

int main(){

    string a = "0001";
    a[3] = (int(a[3] - '0') + 1) + '0';
    cout<<a;
    
    return 0;
}