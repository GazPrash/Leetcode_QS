#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

bool isValid(string s){
    
    map<char, char> mapar;  
    mapar[']'] = '[';
    mapar[')'] = '(';
    mapar['}'] = '{';

    vector<char> stack;
    for (int i = 0; i< s.length(); i++){
        if (s[i] == '[' || s[i] == '{' || s[i] == '('){
            stack.push_back(s[i]);

        }

        else if (s[i] == ']' || s[i] == '}' || s[i] == ')'){
            auto findit = mapar.find(s[i]);
            if (*stack.end() == findit->second){
                stack.pop_back();
            }
        }
    }

    if (stack.empty()){
        return true;
    }

    return false;

}

int main(){
    return 0;
}