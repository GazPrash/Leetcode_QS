#include<bits/stdc++.h>
using namespace std;

int recc(int n, vector<int> &vec){
    if ((n == 1) || (n == 0)) return 1;

    if (vec[n] != 0) return vec[n];
    else{
        vec[n] = recc(n-1, vec) + recc(n-2, vec);
    }
}

int climbStairs(int n) {
    vector<int> arr1(n+1);
    // n+1 elements in heap;

    for (int i = 0; i < n; i++) arr1[i] = 0;

    return recc(n, arr1);

}

int main(){
   

}
