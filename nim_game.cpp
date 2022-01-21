#include<bits/stdc++.h>
using namespace std;

int n = 0;
vector<int> dp(n, -1);

bool dy_rec(int n) {
    if (n <= 3) return true; else return false;
    return dy_rec(n-1) || dy_rec(n-2) || dy_rec(n-3);     
}

int main(){



    return 0;
}