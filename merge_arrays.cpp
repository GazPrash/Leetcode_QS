#include<bits/stdc++.h>
using namespace std;


vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i, j, n1, n2, k;
    i = 0;
    j = 0;
    n1 = nums1.size();
    n2 = nums2.size();

    vector<int> merged;
    while (i < n1 && j  <n2){
        if (nums1[i] <= nums2[j]){
            merged.push_back(nums1[i]);
            merged.push_back(nums2[j]);
        }
        else {
            merged.push_back(nums2[j]);
            merged.push_back(nums1[i]);
        }

        i++;
        j++;

    }

    if (i <n1){
        for(i;i<n1;i++){
            merged.push_back(i);
        }
    }

    if (j < n2){
        for(j;j<n2;j++){
            merged.push_back(j);
        }
    }

    return merged;



}

int main(){
    
    return 0;
}