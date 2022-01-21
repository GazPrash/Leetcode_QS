#include<bits/stdc++.h>
using namespace std;

void add_para(vector<string> &vec, string t, int n, int m){
    if (n == 0 && m == 0) {
        vec.push_back(t); 
        return;
    }

    if (n > 0) add_para(vec, t + '(', --n, m);
    if (m > 0) add_para(vec, t + ')', n, --m);

}

vector<string> generateParenthesis(int n) {

}

int main(){
    
    return 0;
}