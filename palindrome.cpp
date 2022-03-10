#include<string>
#include<iostream>

using namespace std;

bool isPalindrome(int x) {
    string newx = to_string(x);
    int n = newx.length();
    
    int l, h, m;
    l = 0;
    h = n;

    while (l <= h){
        if (newx[l] == newx[h]){
            l++;
            h--;
        }
        else{
            return false;
        }

    }
    return true; 
        
}

int main(){
    isPalindrome(121);

    return 0;
}