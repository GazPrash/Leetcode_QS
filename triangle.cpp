#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // is there someone else ? | the weeknd
    int rec_func(vector<vector<int>> &tri, int i, int j, int csum){
        if (i == (tri.size() -1)){
            return (tri[i][j] + csum);
        }
        if ((j == (tri[i+1].size() -1))) {
            csum += tri[i][j];
            csum = rec_func(tri, i+1, j, csum);
            return csum;
        }
        csum += tri[i][j];
        csum = min(rec_func(tri, i+1, j+1, csum), rec_func(tri, i+1, j, csum));
        
        cout<<csum<<"------"<<i<<"--------"<<j<<endl;

        return csum;
        
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        if (triangle.size() == 1){
            int summ = 0;
            for (auto k : triangle[0]){
                summ += k;
            }
            return summ;
        }
        return rec_func(triangle, 0, 0, 0);
     
    }
};


int main(){
    
    return 0;
}