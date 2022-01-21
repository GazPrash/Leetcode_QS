#include<bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    std:: unordered_set<int> rng;
    int big = INT_MIN;
    for (int k: nums){
        if (k > big){
            big = k;
        }
        rng.insert(k);
    }

    vector<string> out;
    int pcatch = 0;
    int icatch = 0;
    for (int i = 0; i < big; i++){
        if (rng.find(i) != rng.end()){
        } else{
            icatch = i;
            if (icatch != pcatch) {
                out.push_back(to_string(pcatch) + "->" + to_string(icatch));
            } else{
                out.push_back(to_string(pcatch));
            }
            pcatch = i;
        }
    }

    return out;


}

int main(){
    
    return 0;
}