#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    std:: map<int, int> rec;
    for (int x: nums){
        rec[x]++;
    }


    std:: map<int, int> :: iterator iter = rec.begin();
    for (iter; iter != rec.end(); iter++){
        if (iter->second == 1) return iter->first;
    }

    return 0;

}

int main(){
    
    return 0;
}