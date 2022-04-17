#include<bits/stdc++.h>
using namespace std;

class KthLargest {
public:
    int k_val;
    vector<int> num_s;
    KthLargest(int k, vector<int>& nums) {
        k_val = k;
        num_s = nums;
        sort(num_s.begin(), num_s.end());
    }
    
    int add(int val) {
        auto it = num_s.begin();
        bool added = false;
        for (int k : num_s){
            if (val <= k){
                num_s.insert(it, val);
                added = true;
                break;
            }
            it++;
        }
        if (!added) num_s.insert(num_s.end(), val);

        int k = 0, largest = -1;
        for (int t = num_s.size()-1; t >=0; t--){
            if (k == k_val) break; 
            largest = num_s[t];
            k++;
        }

        return largest;
        
    }
};




int main(){
    
    return 0;
}