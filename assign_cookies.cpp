#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool binarySearch(int val, vector<int> &arr){
        int l = 0, h = (arr.size()-1), m;
        while (l < h){
            m = l - (l-h)/2;
            if (arr[m] == val){
                arr[m] = -1;
                return true;
            }
            else if (arr[m] > val){
                h = m-1;
            }
            else{
                l = m+1;
            }

        }

        if (arr[m] > val){
            arr[m] = -1;
            return true;
        }

        return false;


    }

    int findContentChildren(vector<int>& g, vector<int>& s) {
        int content = 0;
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++){
            for (int j = 0; j < g.size(); j++){
                if (binarySearch(g[j], s)){
                    content++;
                }
            }
        }

        return content;

    }
};

int main(){
    
    return 0;
}