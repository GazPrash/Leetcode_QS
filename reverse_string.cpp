#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &s){
    int n = s.size();
    int left = 0, right = n-1;

    while (left <= right){
        swap(s[left], s[right]);
        left++, right--;
    }

}

int main(){
    
    return 0;
}