#include<bits/stdc++.h>
using namespace std;

void func_prime(int n){
    for (int i = 1; i <= n; i++){
        bool prime = true;
        for (int j = 2; j < i; j++){
            if ((i%j) == 0){
                prime = false;
                break;
            }
        }
        if (prime){
            cout<<"Prime Number: " <<i<<"\n";
        }
    }

}

int main(){
    func_prime(20);
    

    return 0;
}