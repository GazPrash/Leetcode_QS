#include<vector>
#include<iostream>
#include<map>
using namespace std;


class MinStack{
    public:
        vector<int> min;
        vector<int> main;

        void push(int val) {
            main.push_back(val);
            if (min.empty()){
                min.push_back(2147483647);
            }

            if (min[0] > val){
                min[0] = val;                
            }
        }
        
        void pop() {
            main.pop_back();
        }
        
        int top() {
            return main.back();
        }
        
        int getMin() {
            return min[0];
        }
};

int main(){
    return 0;
}