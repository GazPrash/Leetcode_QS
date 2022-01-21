#include<bits/stdc++.h>
using namespace std;
    
int maxProfit(vector<int>& prices) {
    int minp = INT_MAX;
    int diff = 0;

    for (int i = 0; i < prices.size(); i++){
        if (minp > prices[i]) minp = prices[i];
        diff = max(diff, (prices[i] - minp));

    }

    return diff;

}    

int main(){
    
    return 0;
}