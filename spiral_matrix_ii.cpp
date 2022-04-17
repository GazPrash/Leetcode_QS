#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> out;
        int fill = 0;
        vector<int> temp;
        for (int i = 0; i < pow(n, 2); i++){
            if (fill < n){
                temp.push_back(i);
                fill++;
            } else {
                out.push_back(temp);
                temp.clear();
                fill = 0;
            }
        }

        return out;

    }
};

int main(){
    
    return 0;
}