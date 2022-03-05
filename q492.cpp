#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> constructRectangle(int area) {
        int max_width = sqrt(area);

        while (area % max_width != 0){
            max_width--;
        }

        return {area/max_width, max_width};
        
    }
};

int main(){
    
    return 0;
}