#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comp(int a, int b){
        string s1 = to_string(a), s2 = to_string(b);

        if (s1.length() == s2.length()){
            for (int i = 0; i < s1.length(); i++){
                if (s1[i] == s2[i]) continue;
                else return (s1[i] < s2[i]);
            }
        } else {
            int k = min(s1.length(), s2.length());
            while (k){
                if (s1[k] == s2[k]) continue;
                else return s1[k] < s2[k];
            }
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> out;
        for (int i = 1; i <= n; i++){
            out.push_back(i);
        }

        sort(out.begin(), out.end(), comp);
        return out;
    }
};

int main(){
    cout<<('1' > '2');
    return 0;
}