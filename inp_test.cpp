#include<bits/stdc++.h>
using namespace std;

bool findit(){
    int tc,len;
    cin>>tc>>len;

    while (tc > 0){
        vector<int> nums(len);
        for (int i = 0; i < len; i++){
            cin>>nums[i];
        }

        for (int k : nums){
            cout<<"nums"<<tc<<"is: "<<k<<endl;
        }
    }



}

int main(){
    findit();
    return 0;
}