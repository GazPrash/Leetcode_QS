#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) {
    if (columnNumber == 0) return "";

    string alpha = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
    int i = 1;
    int back = -64;

    string res = "";
    res += alpha[(columnNumber/26)%26];

    int rem = columnNumber%26;
    if (rem == 0) return res;

    int zs = 0;

    while (rem > 26){
        rem -= 26;
        zs++;
    }

    while (zs > 0) {
        res += 'Z';
        zs--;
        }

    res += alpha[rem];

    return res;


    // alternate stupid approach.... // dont try this at home


    // for (char k : alpha){
    //     alphamap[i] = k;
    //     i++;
    // }
    // string res = "";

    // auto iter = alphamap.begin();
    // int left;
    // left = columnNumber/26;

    // while (left > 0 ){
    //     if (left > 26){
    //         res += 'Z';
    //         left -= 26;
    //     }
    //     else{
    //         res += alphamap.find(left)->second;
    //         break;
    //     }
    // }

    // return res;

}

int main(){
    
    return 0;
}