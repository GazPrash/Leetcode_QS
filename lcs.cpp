#include<iostream>
#include<vector>
#include<string>
#include<map>

std:: string longestCommonPrefix(std:: vector<std::string>& strs) {
    std::vector<std::string> out;
    std:: string pref = "";
    std:: map<char, int> m;

    for (std:: string str : strs){
        for (int i = 0; i < str.length(); i++){
            m[str[i]]++;
        }
    }

    auto mapit = m.begin();

    for (mapit; mapit != m.end(); mapit++){
        if ((mapit->second) == strs.size()){
            pref += mapit->first;
        }
        else{
            break;
        }

    }

    return pref;

}

int main(){

    return 0;
}