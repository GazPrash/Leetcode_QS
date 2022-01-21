#include<bits/stdc++.h>
using namespace std;

int mysqrt(int x){
    int last;
    for (int i = 0; i < x; i++){
        if ((i*i) <= x){
            last = i;
        }
        else{
            return last;
        }
    }   

}

int main(){


    return 0;
}