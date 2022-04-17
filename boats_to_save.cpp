#include<bits/stdc++.h>
using namespace std;

// Daily LeetCode Challenge | Sorting (O(nlogn) + O(n)) -> O(nlogn)
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int l = 0, r = people.size()-1;
        int boatsNum = 0;
        while (l <= r){
            int totalwei = people[l] + people[r];
            if (totalwei <= limit){
                people[l] = -1, people[r] = -1;
                boatsNum++;
                l++;
                r--;
            } else {
                r--;
            }
        }

        for (int k : people){
            if ((k != -1) && (k <= limit)) boatsNum++;
        }
        return boatsNum;
    }
};

int main(){
    
    return 0;
}