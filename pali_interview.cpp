#include<iostream>
#include<algorithm>
using namespace std;

bool func(){
    string neww;
    string inp = "A man, and a canal: whoo";
    string neww2;

    for (char k: inp){
        if (k >= 97 && k <= (97+26)){
            neww += k;
        }
    }
    neww2 = neww;
    reverse(neww.begin(), neww.end());
    if (neww2 == neww) return true;

    return false;
}

int main(){
    cout<<func();
    
    return 0;
}