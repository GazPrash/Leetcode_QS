#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {

        bool overlap = true;
        int total_area = ((abs(ax1-ax2) * abs(ay1-ay2)) + (abs(bx1-bx2) * abs(by1-by2)));
        int ded_area = 0;

        if ((ax1 == bx1) && (ax2 == bx2) && (ay1 == by1) && (ay2 == by2)) return total_area/2;

        if ((bx1 >= ax1) && (bx1 <= ax2)){
            if ((by2 > ay1) && (by2 < ay2)){
                ded_area += (abs(bx1 - ax2) * abs(ay1 - by2));
            }
            else if (ay2 < by2){
                if (ay1 > by1){
                    ded_area += (abs(bx1 - ax2) * abs(ay2-ay1));
                } 
                else if (ay2 < by1){
                    ded_area = 0;
                }
                else {
                    ded_area += (abs(bx1 - ax2) * abs(ay2 - by2));
                }
            }
            else if ((by1 > ay1) && (by2 < ay2)){
                ded_area = (abs(bx1-bx2) * abs(by1-by2));
            }
            else if ((by1 < ay1) && (by2 < ay2) && (by2 > ay1)){
                ded_area = (abs(bx2 - ax1) * abs(bx2- bx1));
            }
            else if ((by1 < ay1) && (by2 < ay1) && (by2 < ay1)){
                ded_area = 0;
            }
        }

        return total_area - ded_area;
    }
};

int main(){
    
    return 0;
}

// -2
// -2
// 2
// 2
// -1
// -1
// 1
// 1

                        // a2
// ------------------0-------------------------
            //  a1