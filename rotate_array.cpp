#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &nums, int k){
    k %= nums.size();
    int i = nums.size()-k, new_ind, counter = 0;
    vector<int> vec2;
    
    if (nums.size() == 1) return;

    if (k == 0) return;

    while (counter < nums.size()){
        vec2.push_back(nums[i]);
        cout<<i<<endl;
        i = (i+1)%nums.size();
        counter++;
    }

    nums = vec2;
       
}

int main(){
    vector <int> vec1 = {0};

    rotate(vec1, 4);

    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<vec1[i]<<" | ";
    }

    
    return 0;
}