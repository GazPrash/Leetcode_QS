#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n1 = matrix.size()-1;
        int n2 = matrix[0].size()-1;
        int l = 0, h = (n1 + n2);
        vector<int> mid;
        int intermd;
        while (l < h){
            intermd = (l+h)/2;
            mid = {(intermd)/n2 ,(intermd)%n2};
            
            if (target < matrix[mid[0]][mid[1]]){
                h = (intermd-1)/n2 + (intermd-1)%n2;
            }
            else if (target > matrix[mid[0]][mid[1]]){
                l = (intermd+1)/n2 + (intermd+1)%n2;
            }
            else{
                return true;
            }

        }

        return false;
        
    }
};

int main(){
    
    return 0;
}