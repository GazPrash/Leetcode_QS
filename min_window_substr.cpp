#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct tmap_counter{
        int ct = -1;
    };

    string minWindow(string s, string t) {
        if (t == "") return "";
        
        unordered_map<char, int> window;
        unordered_map<char, tmap_counter> tmap;
        int need = t.length(), have = 0;
        int lo = 0, hi = 0;
        int start_ind = 0, str_len = INT_MAX;

        for (char k : t) tmap[k].ct = tmap[k].ct == -1 ? 1 : (tmap[k].ct + 1);
        while (hi < s.length()){
            char ch = s[hi];
            window[ch]++;
            if (tmap[ch].ct >= 1){
                if (window[ch] == tmap[ch].ct) have++;
            }
            while (need == have){
                cout<<lo<<"---------"<<hi<<endl;
                window[s[lo]] = 0;
                if ((hi-lo+1) < str_len){
                    str_len = hi-lo+1;
                    start_ind = lo;
                }
                if (tmap[s[lo]].ct >= 1) {
                    if (window[s[lo]] == tmap[s[lo]].ct) have--;
                }
                lo++;
            }
            hi++;
        }
        cout<<start_ind<<"------"<<str_len<<endl;
        
        return s.substr(start_ind, str_len);

    }
};

int main(){
    return 0;
}