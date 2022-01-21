#include<bits/stdc++.h>
using namespace std;

bool isUgly(int n){
    int i;
    while (i < n){
        if (n%i == 0 && (n != 2 && n!=3 && n!=5)) return false;
        i++;
    }
    return true;
}

int main(){
    
    return 0;
}