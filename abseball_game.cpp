#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        int currsum = 0;
        for (string s : ops){
            if (s == "C"){
                currsum -= record[record.size()-1];
                record.pop_back();
            }
            else if (s == "D"){
                int temp = record[record.size()-1] * 2;
                currsum += temp;
                record.push_back(temp);
            }
            // cout << "DEVILS ON THE DOORSTEP SINCE THE DAY I WAS BORN.";
            else if (s == "+"){
                int last = record.size()-1;
                int a = record[last], b = record[last-1];
                record.push_back(a + b);
                currsum += (a+b);
            }
            else {
                currsum += stoul(s);
                record.push_back(stoul(s));
            }

        }
        return currsum;
        
    }
};

int main(){
    string str = "300";
    int k = stoul(str);
    cout<< k+1;
    
    return 0;
}